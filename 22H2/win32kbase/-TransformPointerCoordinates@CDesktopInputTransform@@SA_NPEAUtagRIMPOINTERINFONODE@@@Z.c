/*
 * XREFs of ?TransformPointerCoordinates@CDesktopInputTransform@@SA_NPEAUtagRIMPOINTERINFONODE@@@Z @ 0x1C01BAEBC
 * Callers:
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C0189634 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C005DD98 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C005DEB0 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?GetInstance@CDesktopInputTransform@@CAAEAV1@XZ @ 0x1C00886C8 (-GetInstance@CDesktopInputTransform@@CAAEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     ?InverseTransformPoint@@YA?AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1C01167B0 (-InverseTransformPoint@@YA-AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?InverseTransformRect@@YA?AUtagRECT@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1C01168AC (-InverseTransformRect@@YA-AUtagRECT@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?IsIdentityTransform@@YA_NAEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0116AB0 (-IsIdentityTransform@@YA_NAEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetTransform@CDesktopInputTransform@@AEBA_NPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01BABB8 (-GetTransform@CDesktopInputTransform@@AEBA_NPEAUtagINPUT_TRANSFORM@@@Z.c)
 */

char __fastcall CDesktopInputTransform::TransformPointerCoordinates(struct tagRIMPOINTERINFONODE *a1)
{
  CPushLock *Instance; // rbx
  float *v4; // rax
  float *v5; // rax
  bool v6; // zf
  unsigned __int64 v7; // [rsp+20h] [rbp-19h] BYREF
  struct tagRECT v8; // [rsp+28h] [rbp-11h] BYREF
  float v9[16]; // [rsp+40h] [rbp+7h] BYREF

  memset(v9, 0, sizeof(v9));
  Instance = CDesktopInputTransform::GetInstance();
  CPushLock::AcquireLockShared(Instance);
  if ( CDesktopInputTransform::GetTransform(Instance, (struct tagINPUT_TRANSFORM *)v9) )
  {
    CPushLock::ReleaseLock(Instance);
    if ( !IsIdentityTransform((const struct tagINPUT_TRANSFORM *)v9) )
    {
      v7 = _mm_unpacklo_ps(
             (__m128)COERCE_UNSIGNED_INT((float)*((int *)a1 + 12)),
             (__m128)COERCE_UNSIGNED_INT((float)*((int *)a1 + 13))).m128_u64[0];
      v4 = (float *)InverseTransformPoint((__int64)&v8, (float *)&v7, v9);
      v7 = __PAIR64__((int)v4[1], (int)*v4);
      *((_QWORD *)a1 + 6) = v7;
      v7 = _mm_unpacklo_ps(
             (__m128)COERCE_UNSIGNED_INT((float)*((int *)a1 + 16)),
             (__m128)COERCE_UNSIGNED_INT((float)*((int *)a1 + 17))).m128_u64[0];
      v5 = (float *)InverseTransformPoint((__int64)&v8, (float *)&v7, v9);
      v6 = *((_DWORD *)a1 + 4) == 2;
      v7 = __PAIR64__((int)v5[1], (int)*v5);
      *((_QWORD *)a1 + 8) = v7;
      if ( v6 )
      {
        *(struct tagRECT *)((char *)a1 + 120) = *InverseTransformRect(
                                                   &v8,
                                                   (const struct tagRECT *)((char *)a1 + 120),
                                                   (const struct tagINPUT_TRANSFORM *)v9);
        *(struct tagRECT *)((char *)a1 + 136) = *InverseTransformRect(
                                                   &v8,
                                                   (const struct tagRECT *)((char *)a1 + 136),
                                                   (const struct tagINPUT_TRANSFORM *)v9);
      }
    }
    return 1;
  }
  else
  {
    CPushLock::ReleaseLock(Instance);
    return 0;
  }
}
