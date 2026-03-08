/*
 * XREFs of NtGdiModifyWorldTransform @ 0x1C0002990
 * Callers:
 *     <none>
 * Callees:
 *     ?bWorldMatrixInRange@@YAHPEAVMATRIX@@@Z @ 0x1C0002E84 (-bWorldMatrixInRange@@YAHPEAVMATRIX@@@Z.c)
 *     ?bWorldXformIdentity@@YAHPEBU_XFORML@@@Z @ 0x1C0016EBC (-bWorldXformIdentity@@YAHPEBU_XFORML@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00CFF10 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memcmp @ 0x1C012BEF0 (memcmp.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269660 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?bMultToWorld@EXFORMOBJ@@QEAAHPEAVMATRIX@@K@Z @ 0x1C02D1834 (-bMultToWorld@EXFORMOBJ@@QEAAHPEAVMATRIX@@K@Z.c)
 */

__int64 __fastcall NtGdiModifyWorldTransform(__int64 a1, struct _XFORML *a2, unsigned int a3)
{
  struct _XFORML *v4; // rsi
  unsigned int v5; // edi
  __int64 *ThreadWin32Thread; // rax
  Gre::Base *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  struct UMPDOBJ *v10; // rdx
  DC *v11; // rbx
  int v12; // ebx
  struct _DC_ATTR *UserAttr; // rax
  unsigned int v14; // eax
  struct Gre::Base::SESSION_GLOBALS *v15; // rsi
  DC *v16; // rax
  __int64 v17; // rcx
  DC *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  struct _DC_ATTR *v21; // rax
  __int64 v22; // rsi
  DC *v24; // [rsp+20h] [rbp-39h] BYREF
  __int64 v25; // [rsp+28h] [rbp-31h]
  int v26; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v27[2]; // [rsp+38h] [rbp-21h] BYREF
  __int128 Buf1; // [rsp+48h] [rbp-11h] BYREF
  __int128 v29; // [rsp+58h] [rbp-1h]
  int v30; // [rsp+68h] [rbp+Fh]
  struct _XFORML v31; // [rsp+70h] [rbp+17h] BYREF

  v4 = a2;
  v25 = 0LL;
  LOBYTE(a2) = 1;
  v5 = 0;
  v24 = (DC *)HmgLockEx(a1, a2, 0LL);
  if ( !v24 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
LABEL_19:
    v11 = v24;
    goto LABEL_20;
  }
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread && (v8 = *ThreadWin32Thread) != 0 && (v9 = *(_QWORD *)(v8 + 40), v9 != v8 + 40) )
    v10 = (struct UMPDOBJ *)(v9 - 40);
  else
    v10 = 0LL;
  v11 = v24;
  if ( *((_WORD *)v24 + 6) == 1 )
  {
    *((_QWORD *)v24 + 271) = v10;
    *((_DWORD *)v24 + 544) = 0xFFFF;
    v11 = v24;
  }
  else if ( *((struct UMPDOBJ **)v24 + 271) != v10 )
  {
    XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v24, v10);
    v11 = 0LL;
    _InterlockedDecrement((volatile signed __int32 *)v24 + 3);
    v24 = 0LL;
    goto LABEL_56;
  }
  if ( HIDWORD(v25) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v11 + 6) + 40LL) & 0x8000) == 0 )
    {
LABEL_13:
      _InterlockedDecrement((volatile signed __int32 *)v11 + 3);
      v11 = 0LL;
      v24 = 0LL;
      goto LABEL_56;
    }
    v12 = *((_DWORD *)v11 + 528);
    if ( v12 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v11 = v24;
      goto LABEL_13;
    }
    goto LABEL_19;
  }
LABEL_20:
  if ( !v11 )
    return v5;
  if ( (*((_DWORD *)v11 + 11) & 2) == 0 )
  {
    if ( !HIDWORD(v25) )
    {
      UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v24);
      if ( UserAttr && !DC::SaveAttributes(v24, UserAttr) )
      {
        v11 = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)v24 + 3);
        v24 = 0LL;
        goto LABEL_56;
      }
      v11 = v24;
    }
    *((_DWORD *)v11 + 11) |= 2u;
    v11 = v24;
    LODWORD(v25) = 1;
  }
  if ( (*((_DWORD *)v11 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v11);
    v11 = v24;
  }
  if ( v11 )
  {
    memset(&v31, 0, sizeof(v31));
    if ( v4 )
    {
      v14 = ProbeAndConvertXFORM(v4, &v31);
      v11 = v24;
      v5 = v14;
    }
    else
    {
      LOBYTE(v5) = a3 == 1;
    }
    if ( !v5 )
    {
LABEL_56:
      if ( v11 )
      {
        if ( (_DWORD)v25 && (*((_DWORD *)v11 + 11) & 2) != 0 )
        {
          if ( !HIDWORD(v25) )
          {
            v21 = XDCOBJ::GetUserAttr((XDCOBJ *)&v24);
            if ( v21 )
              DC::RestoreAttributes(v24, v21);
            v11 = v24;
          }
          *((_DWORD *)v11 + 11) &= ~2u;
          v11 = v24;
          LODWORD(v25) = 0;
        }
        v26 = 0;
        v22 = *(_QWORD *)v11;
        HmgDecrementExclusiveReferenceCountEx(v11, HIDWORD(v25), &v26);
        if ( v26 )
          GrepDeleteDC(v22, 0x2000000LL);
      }
      return v5;
    }
    Buf1 = 0LL;
    v30 = 0;
    v5 = 0;
    v29 = 0LL;
    v15 = Gre::Base::Globals(v7);
    if ( a3 != 1 )
    {
      if ( a3 == 2 || a3 == 3 )
      {
        vConvertXformToMatrix(&v31, &Buf1);
        v11 = v24;
        if ( (*(_DWORD *)(*((_QWORD *)v24 + 122) + 340LL) & 2) == 0 )
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v27, (struct XDCOBJ *)&v24, 0x203u);
          if ( !v27[0] || !(unsigned int)EXFORMOBJ::bMultToWorld((EXFORMOBJ *)v27, (struct MATRIX *)&Buf1, a3) )
            goto LABEL_50;
          v11 = v24;
        }
        if ( !(unsigned int)bWorldMatrixInRange((struct MATRIX *)&Buf1) )
          goto LABEL_56;
        *(_OWORD *)((char *)v11 + 392) = Buf1;
        *(_OWORD *)((char *)v11 + 408) = v29;
        v19 = *((_QWORD *)v24 + 122);
        *(_OWORD *)(v19 + 356) = Buf1;
        *(_OWORD *)(v19 + 372) = v29;
        if ( memcmp(&Buf1, (char *)v15 + 6560, 0x20uLL) )
          goto LABEL_42;
LABEL_53:
        *(_DWORD *)(*((_QWORD *)v24 + 122) + 340LL) |= 0x80B2u;
        goto LABEL_54;
      }
      if ( a3 != 4 )
        goto LABEL_50;
      if ( !(unsigned int)bWorldXformIdentity(&v31) )
      {
        vConvertXformToMatrix(&v31, &Buf1);
        if ( (unsigned int)bWorldMatrixInRange((struct MATRIX *)&Buf1) )
        {
          v16 = v24;
          *(_OWORD *)((char *)v24 + 392) = Buf1;
          *(_OWORD *)((char *)v16 + 408) = v29;
          v17 = *((_QWORD *)v24 + 122);
          *(_OWORD *)(v17 + 356) = Buf1;
          *(_OWORD *)(v17 + 372) = v29;
LABEL_42:
          v18 = v24;
          *(_DWORD *)(*((_QWORD *)v24 + 122) + 340LL) |= 0x80B0u;
          *(_DWORD *)(*((_QWORD *)v18 + 122) + 340LL) &= ~2u;
LABEL_54:
          v11 = v24;
          goto LABEL_55;
        }
LABEL_50:
        v11 = v24;
        goto LABEL_56;
      }
    }
    v11 = v24;
    if ( (*(_DWORD *)(*((_QWORD *)v24 + 122) + 340LL) & 2) != 0 )
    {
LABEL_55:
      v5 = 1;
      goto LABEL_56;
    }
    *(_OWORD *)((char *)v24 + 392) = *((_OWORD *)v15 + 410);
    *(_OWORD *)((char *)v11 + 408) = *((_OWORD *)v15 + 411);
    v20 = *((_QWORD *)v24 + 122);
    *(_OWORD *)(v20 + 356) = *((_OWORD *)v15 + 410);
    *(_OWORD *)(v20 + 372) = *((_OWORD *)v15 + 411);
    goto LABEL_53;
  }
  return v5;
}
