__int64 __fastcall GreSetMagicColors(HDC a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // r13
  unsigned int v6; // edi
  unsigned int v7; // r15d
  int v8; // r12d
  __int64 v9; // rsi
  _QWORD *v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rdi
  __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  int v17; // r9d
  unsigned int v18; // eax
  __int64 v20; // [rsp+38h] [rbp-59h] BYREF
  ULONG_PTR v21; // [rsp+40h] [rbp-51h] BYREF
  HSEMAPHORE v22; // [rsp+48h] [rbp-49h] BYREF
  HSEMAPHORE v23; // [rsp+50h] [rbp-41h] BYREF
  HSEMAPHORE v24; // [rsp+58h] [rbp-39h] BYREF
  PERESOURCE v25; // [rsp+60h] [rbp-31h] BYREF
  _QWORD v26[2]; // [rsp+68h] [rbp-29h] BYREF
  struct _ERESOURCE v27; // [rsp+78h] [rbp-19h] BYREF
  __int64 v28; // [rsp+110h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v26, a1);
  v5 = v26[0];
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( !v26[0] )
    return v6;
  if ( a3 - 8 <= 1 || a3 - 246 <= 1 )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v28);
    if ( (a2 & 0xFD000000) != 0 )
    {
LABEL_40:
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v28);
      goto LABEL_41;
    }
    v28 = *(_QWORD *)(v5 + 48);
    v9 = v28;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v25, (struct PDEVOBJ *)&v28);
    v24 = *(HSEMAPHORE *)(v9 + 56);
    EngAcquireSemaphore(v24);
    LOWORD(v27.OwnerEntry.OwnerThread) = 256;
    v27.SharedWaiters = 0LL;
    v27.ExclusiveWaiters = 0LL;
    DEVLOCKOBJ::vLock((DEVLOCKOBJ *)&v27, (struct PDEVOBJ *)&v28);
    if ( !_bittest((const signed __int32 *)(v9 + 2140), 8u) )
    {
      if ( (*(_DWORD *)(v9 + 40) & 0x20000) == 0 )
      {
LABEL_35:
        DEVLOCKOBJ::vDestructor(&v27);
        if ( v27.SharedWaiters )
        {
          if ( LOBYTE(v27.OwnerEntry.OwnerThread) )
          {
            *((_DWORD *)v27.SharedWaiters + 10) &= ~2u;
            LOBYTE(v27.OwnerEntry.OwnerThread) = 0;
          }
          XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v27.SharedWaiters);
        }
        SEMOBJ::vUnlock((PERESOURCE *)&v24);
        NEEDGRELOCK::vUnlock(&v25);
        goto LABEL_40;
      }
      v11 = *(_QWORD *)(v9 + 1768);
      v10 = *(_QWORD **)v11;
      v12 = *(_DWORD *)(v11 + 16);
      while ( 1 )
      {
        v9 = v10[6];
        v28 = v9;
        if ( _bittest((const signed __int32 *)(v9 + 2140), 8u) )
          break;
        v10 = (_QWORD *)*v10;
        if ( !--v12 )
          goto LABEL_35;
      }
      v8 = 1;
    }
    v20 = *(_QWORD *)(v9 + 1776);
    v13 = *(_QWORD *)(SGDGetSessionState(v10) + 24);
    v23 = *(HSEMAPHORE *)(v13 + 136);
    EngAcquireSemaphore(v23);
    v22 = *(HSEMAPHORE *)(v13 + 40);
    EngAcquireSemaphore(v22);
    v21 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v14) + 24) + 6000LL);
    v15 = XEPALOBJ::ulDispatchGFPEFunction(&v21, *(_DWORD *)(v21 + 100), a2);
    v16 = v15;
    if ( v15 != -1 )
    {
      if ( v15 >= 0xA )
        v16 = v15 + 236;
      if ( v16 == a3 )
      {
        if ( !v8 )
        {
          v6 = 1;
          goto LABEL_29;
        }
      }
      else if ( v16 - 8 > 1 && v16 - 246 > 1 )
      {
        if ( a3 == 8 )
        {
          v17 = 12639424;
        }
        else if ( a3 == 9 )
        {
          v17 = 15780518;
        }
        else
        {
          v17 = 10789024;
          if ( a3 == 246 )
            v17 = 15793151;
        }
        v18 = bSetMagicColor((__int64)&v28, v20, a3, v17);
        v6 = 0;
        goto LABEL_28;
      }
    }
    v18 = bSetMagicColor((__int64)&v28, v20, a3, a2);
    v6 = v18;
LABEL_28:
    v7 = v18;
LABEL_29:
    SEMOBJ::vUnlock((PERESOURCE *)&v22);
    if ( v7 && (*(_DWORD *)(v9 + 40) & 0x400) == 0 )
    {
      if ( *(_QWORD *)(v9 + 1736) )
        (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v9 + 1736))(
          *(_QWORD *)(*(_QWORD *)(v9 + 24) + 1768LL),
          &v20,
          0LL,
          0LL,
          *(_DWORD *)(v20 + 28));
      else
        v6 = 0;
    }
    SEMOBJ::vUnlock((PERESOURCE *)&v23);
    goto LABEL_35;
  }
LABEL_41:
  if ( v5 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v26);
  return v6;
}
