/*
 * XREFs of ?GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z @ 0x1C0054ED8
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C0339ADC (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

struct VISTABLTSTUBINFO *__fastcall DXGDEVICE::GetVistaBltStubInfo(DXGDEVICE *this, int a2)
{
  __int64 v3; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d

  if ( a2 )
  {
    if ( !*((_QWORD *)this + 243) )
    {
      v3 = operator new[](0x10uLL, 0x4B677844u, 256LL);
      *((_QWORD *)this + 243) = v3;
      if ( !v3 )
      {
        WdLogSingleEntry1(6LL, 1088LL);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v5,
              v4,
              v6,
              0LL,
              1,
              -1,
              L"Failed to allocate Vista BLT stub info",
              1088LL,
              0LL,
              0LL,
              0LL,
              0LL);
        }
      }
    }
  }
  return (struct VISTABLTSTUBINFO *)*((_QWORD *)this + 243);
}
