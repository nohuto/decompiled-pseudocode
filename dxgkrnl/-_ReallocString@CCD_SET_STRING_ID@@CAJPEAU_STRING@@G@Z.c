/*
 * XREFs of ?_ReallocString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@G@Z @ 0x1C01BB3F4
 * Callers:
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C01BB13C (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C01BB1EC (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ?_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z @ 0x1C01BB3AC (-_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::_ReallocString(struct _STRING *a1, USHORT a2)
{
  __int64 v2; // rdi
  CHAR *v4; // rax
  CHAR *v5; // rbp

  v2 = a2;
  if ( a2 <= a1->MaximumLength )
    return 0LL;
  v4 = (CHAR *)operator new[](a2, 0x63644356u, 256LL);
  v5 = v4;
  if ( v4 )
  {
    memmove(v4, a1->Buffer, a1->Length);
    operator delete(a1->Buffer);
    a1->Buffer = v5;
    a1->MaximumLength = v2;
    return 0LL;
  }
  WdLogSingleEntry1(6LL, v2);
  return 3221225495LL;
}
