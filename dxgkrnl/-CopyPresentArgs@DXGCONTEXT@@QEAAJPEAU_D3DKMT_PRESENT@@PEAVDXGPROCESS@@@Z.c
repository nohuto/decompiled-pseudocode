/*
 * XREFs of ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1C0029716
 * Callers:
 *     DxgkSubmitPresentToHwQueue @ 0x1C03198F0 (DxgkSubmitPresentToHwQueue.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C0339ADC (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000E280 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1C01CADE8 (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x1C01E38B0 (-CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::CopyPresentArgs(DXGCONTEXT *this, struct _D3DKMT_PRESENT *a2, struct DXGPROCESS *a3)
{
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // eax
  int v8; // r8d
  DXGPRESENT *v9; // rax
  int v10; // edx
  int v11; // r8d

  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( (*(_WORD *)&Value & 0x8000) != 0 )
  {
    if ( (*(_DWORD *)&Value & 0x400000) != 0 || a2->pPresentRegions )
    {
      WdLogSingleEntry4(2LL, -1073741811LL, this, a2->Flags.Value, a2->pPresentRegions);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            (unsigned int)L"ret = 0x%I64x 0x%I64x 0x%I64x 0x%I64x RedirectedFlip doesn't support Present regions.",
            a2->Flags.Value,
            v8,
            0,
            0,
            -1,
            (__int64)L"ret = 0x%I64x 0x%I64x 0x%I64x 0x%I64x RedirectedFlip doesn't support Present regions.",
            -1073741811LL,
            this,
            a2->Flags.Value,
            a2->pPresentRegions,
            0LL);
      }
      return 3221225485LL;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    v9 = (DXGPRESENT *)*((_QWORD *)this + 19);
    if ( v9 )
      goto LABEL_17;
    v9 = (DXGPRESENT *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(1648LL);
    if ( v9 )
      v9 = DXGPRESENT::DXGPRESENT(v9, *(_DWORD *)(*((_QWORD *)this + 2) + 1888LL));
    *((_QWORD *)this + 19) = v9;
    if ( v9 )
    {
LABEL_17:
      *((_BYTE *)this + 443) = 1;
      return DXGPRESENT::CopyPresentArgs(v9, this, a2);
    }
    else
    {
      WdLogSingleEntry4(6LL, -1073741801LL, *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL), a3, this);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          (unsigned int)L"0x%I64x Out of memory allocating DXGPRESENT, 0x%I64x 0x%I64x 0x%I64x",
          v10,
          v11,
          0,
          1,
          -1,
          (__int64)L"0x%I64x Out of memory allocating DXGPRESENT, 0x%I64x 0x%I64x 0x%I64x",
          -1073741801LL,
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
          a3,
          this,
          0LL);
      return 3221225495LL;
    }
  }
}
