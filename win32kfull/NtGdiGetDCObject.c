/*
 * XREFs of NtGdiGetDCObject @ 0x1C004CC30
 * Callers:
 *     CreateCompatiblePublicDC @ 0x1C02421AC (CreateCompatiblePublicDC.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269660 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiGetDCObject(__int64 a1, int a2)
{
  __int64 v3; // rsi
  __int64 v5; // rdx
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rax
  _QWORD *v9; // rax
  struct UMPDOBJ *v10; // rdx
  DC *v11; // r9
  int v12; // ebx
  struct _DC_ATTR *v13; // rax
  __int64 v14; // rdx
  int v15; // ebx
  __int64 *v16; // rax
  struct SURFACE *v17; // rcx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v19; // rbx
  DC *v20; // [rsp+20h] [rbp-60h] BYREF
  __int64 v21; // [rsp+28h] [rbp-58h]
  __int128 v22; // [rsp+30h] [rbp-50h] BYREF
  __int64 v23; // [rsp+40h] [rbp-40h]
  int v24; // [rsp+48h] [rbp-38h]
  _QWORD v25[2]; // [rsp+50h] [rbp-30h] BYREF
  __int16 v26; // [rsp+60h] [rbp-20h]
  __int64 v27; // [rsp+68h] [rbp-18h]
  __int64 v28; // [rsp+70h] [rbp-10h]
  __int64 v29; // [rsp+78h] [rbp-8h]
  int v30; // [rsp+B0h] [rbp+30h] BYREF

  v3 = 0LL;
  if ( (unsigned int)PsGetWin32KFilterSet() != 5 || a1 != -589410304 )
  {
    v21 = 0LL;
    LOBYTE(v5) = 1;
    v20 = (DC *)HmgLockEx(a1, v5, 0LL);
    if ( v20 )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread && (v8 = *ThreadWin32Thread) != 0 && (v9 = (_QWORD *)(v8 + 40), (_QWORD *)*v9 != v9) )
        v10 = (struct UMPDOBJ *)(*v9 - 40LL);
      else
        v10 = 0LL;
      v11 = v20;
      if ( *((_WORD *)v20 + 6) == 1 )
      {
        *((_QWORD *)v20 + 271) = v10;
        *((_DWORD *)v20 + 544) = 0xFFFF;
        v11 = v20;
      }
      else if ( *((struct UMPDOBJ **)v20 + 271) != v10 )
      {
        XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v20, v10);
        goto LABEL_21;
      }
      if ( !HIDWORD(v21) )
      {
LABEL_27:
        if ( !v11 )
          return v3;
        if ( (*((_DWORD *)v11 + 11) & 2) != 0 )
        {
LABEL_34:
          if ( (*((_DWORD *)v11 + 130) & 4) != 0 )
          {
            DC::vMarkTransformDirty(v11);
            v11 = v20;
          }
          if ( !v11 )
            return v3;
          v14 = *((_QWORD *)v11 + 122);
          v15 = *(_DWORD *)(v14 + 152);
          if ( (v15 & 0x1000) != 0 )
          {
            GreDCSelectBrush(v11, *(_QWORD *)(v14 + 160));
            v11 = v20;
          }
          if ( (v15 & 0x2000) != 0 )
          {
            GreDCSelectPen(v11, *(_QWORD *)(*((_QWORD *)v11 + 122) + 168LL));
            v11 = v20;
          }
          if ( a2 == 327680 )
          {
            v25[1] = 0LL;
            v22 = 0LL;
            v26 = 256;
            v23 = 0LL;
            v24 = 0;
            v25[0] = 0LL;
            v29 = 0LL;
            v28 = 0LL;
            v27 = 0LL;
            DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)&v22, (struct XDCOBJ *)&v20);
            v17 = (struct SURFACE *)*((_QWORD *)v20 + 62);
            if ( !v17 )
              v17 = SURFACE::pdibDefault;
            v3 = *((_QWORD *)v17 + 4);
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v22);
            if ( v25[0] )
              DLODCOBJ::vUnlock((DLODCOBJ *)v25);
            v11 = v20;
            goto LABEL_56;
          }
          if ( a2 == 0x80000 )
          {
            v3 = *((_QWORD *)v11 + 10);
          }
          else if ( a2 == 655360 )
          {
            v3 = *(_QWORD *)(*((_QWORD *)v11 + 122) + 296LL);
          }
          else
          {
            if ( a2 == 0x100000 )
            {
              v16 = (__int64 *)*((_QWORD *)v11 + 17);
            }
            else
            {
              if ( ((a2 - 3145728) & 0xFFDFFFFF) != 0 )
                goto LABEL_56;
              v16 = (__int64 *)*((_QWORD *)v11 + 18);
            }
            v3 = *v16;
          }
LABEL_56:
          if ( v11 )
          {
            if ( (_DWORD)v21 && (*((_DWORD *)v11 + 11) & 2) != 0 )
            {
              if ( !HIDWORD(v21) )
              {
                UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v20);
                if ( UserAttr )
                  DC::RestoreAttributes(v20, UserAttr);
                v11 = v20;
              }
              *((_DWORD *)v11 + 11) &= ~2u;
              v11 = v20;
              LODWORD(v21) = 0;
            }
            v30 = 0;
            v19 = *(_QWORD *)v11;
            HmgDecrementExclusiveReferenceCountEx(v11, HIDWORD(v21), &v30);
            if ( v30 )
              GrepDeleteDC(v19, 0x2000000LL);
          }
          return v3;
        }
        if ( HIDWORD(v21) )
        {
LABEL_33:
          *((_DWORD *)v11 + 11) |= 2u;
          v11 = v20;
          LODWORD(v21) = 1;
          goto LABEL_34;
        }
        v13 = XDCOBJ::GetUserAttr((XDCOBJ *)&v20);
        if ( !v13 || DC::SaveAttributes(v20, v13) )
        {
          v11 = v20;
          goto LABEL_33;
        }
LABEL_21:
        _InterlockedDecrement((volatile signed __int32 *)v20 + 3);
        goto LABEL_22;
      }
      if ( (*(_DWORD *)(*((_QWORD *)v11 + 6) + 40LL) & 0x8000) == 0 )
      {
LABEL_18:
        _InterlockedDecrement((volatile signed __int32 *)v11 + 3);
LABEL_22:
        v11 = 0LL;
        v20 = 0LL;
        goto LABEL_56;
      }
      v12 = *((_DWORD *)v11 + 528);
      if ( v12 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v11 = v20;
        goto LABEL_18;
      }
    }
    else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
    {
      PsGetWin32KFilterSet();
    }
    v11 = v20;
    goto LABEL_27;
  }
  if ( a2 == 655360 )
    return GreGetStockObject(13LL);
  else
    return 0LL;
}
