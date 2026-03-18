/*
 * XREFs of NtUserfnINDEVICECHANGE @ 0x1C0108450
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall NtUserfnINDEVICECHANGE(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int *a4,
        __int64 a5,
        char a6)
{
  __int64 v9; // rbx
  unsigned int *v10; // rdx
  _DWORD *v11; // rsi
  __int64 v12; // rbx
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned int v25; // ecx
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int128 v28; // [rsp+60h] [rbp-48h] BYREF
  __int64 v29; // [rsp+70h] [rbp-38h]

  v9 = (unsigned __int16)a3 & 0x8000;
  v28 = 0LL;
  v29 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a3 <= 0x800A && ((_DWORD)a3 == 0x8000 || (_DWORD)a3 == 32772 || (unsigned int)a3 > 0x8006) && !a4 )
  {
LABEL_71:
    v12 = 0LL;
    UserSetLastError(87LL, (__int64)v10);
    return v12;
  }
  if ( !v9 )
  {
    v11 = 0LL;
LABEL_7:
    v12 = ((__int64 (__fastcall *)(__int64, _QWORD, unsigned __int64, unsigned int *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
            a1,
            a2,
            a3,
            a4,
            a5);
    goto LABEL_8;
  }
  if ( !a4 )
    goto LABEL_69;
  v10 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v10 = (unsigned int *)MmUserProbeAddress;
  v14 = *v10;
  if ( *v10 < 0xC )
    goto LABEL_71;
  ProbeForRead(a4, *v10, 1u);
  if ( v14 + 2 < v14 )
  {
LABEL_69:
    UserSetLastError(87LL, (__int64)v10);
    return 0LL;
  }
  v15 = Win32AllocPoolWithQuotaZInit(v14 + 2, 1986294613LL);
  v11 = (_DWORD *)v15;
  if ( v15 )
  {
    PushW32ThreadLock(v15, &v28, (__int64)Win32FreePool);
    memmove(v11, a4, v14);
    *((_WORD *)v11 + ((unsigned __int64)v14 >> 1)) = 0;
    a4 = v11;
    if ( *v11 == v14 )
    {
      switch ( v11[1] )
      {
        case 3:
          if ( v14 >= 0x10 )
          {
            v26 = -1LL;
            do
              ++v26;
            while ( *((_WORD *)v11 + v26 + 6) );
            if ( (int)v26 + 1 >= (unsigned int)v26 )
            {
              v27 = 2LL * (unsigned int)(v26 + 1);
              if ( v27 <= 0xFFFFFFFF && (int)v27 + 12 >= (unsigned int)v27 && (int)v27 + 12 <= v14 )
                goto LABEL_7;
            }
          }
          v12 = 0LL;
          break;
        case 5:
          if ( v14 >= 0x20 )
          {
            v18 = -1LL;
            do
              ++v18;
            while ( *((_WORD *)v11 + v18 + 14) );
            if ( (int)v18 + 1 >= (unsigned int)v18 )
            {
              v19 = 2LL * (unsigned int)(v18 + 1);
              if ( v19 <= 0xFFFFFFFF && (int)v19 + 28 >= (unsigned int)v19 && (int)v19 + 28 <= v14 )
                goto LABEL_7;
            }
          }
          v12 = 0LL;
          break;
        case 6:
          if ( v14 < 0x38 )
          {
            v12 = 0LL;
          }
          else
          {
            if ( a3 != 32774 )
              goto LABEL_7;
            v17 = (int)v11[12];
            if ( (int)v17 < 0 )
              goto LABEL_7;
            if ( (v17 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (int)v17 + 52 > v14 )
            {
              v12 = 0LL;
            }
            else
            {
              v22 = (unsigned __int64)v11 + v17 + 52;
              if ( v22 >= (unsigned __int64)(v11 + 13) )
              {
                v23 = -1LL;
                do
                  ++v23;
                while ( *(_WORD *)(v22 + 2 * v23) );
                if ( (int)v23 + 1 >= (unsigned int)v23 )
                {
                  v24 = 2LL * (unsigned int)(v23 + 1);
                  if ( v24 <= 0xFFFFFFFF )
                  {
                    v25 = v24 + 52;
                    if ( (int)v24 + 52 >= (unsigned int)v24
                      && (unsigned int)v17 + v25 >= v25
                      && (unsigned int)v17 + v25 <= v14 )
                    {
                      goto LABEL_7;
                    }
                  }
                }
              }
              v12 = 0LL;
            }
          }
          break;
        case 7:
          if ( v14 >= 0x1A0 )
          {
            v20 = -1LL;
            do
              ++v20;
            while ( *((_WORD *)v11 + v20 + 8) );
            if ( (int)v20 + 1 >= (unsigned int)v20 )
            {
              v21 = 2LL * (unsigned int)(v20 + 1);
              if ( v21 <= 0xFFFFFFFF && (int)v21 + 16 >= (unsigned int)v21 && (int)v21 + 16 <= v14 )
                goto LABEL_7;
            }
          }
          v12 = 0LL;
          break;
        default:
          goto LABEL_7;
      }
    }
    else
    {
      v12 = 0LL;
    }
  }
  else
  {
    UserSetLastError(8LL, v16);
    v12 = 0LL;
  }
LABEL_8:
  if ( v11 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v28);
  return v12;
}
