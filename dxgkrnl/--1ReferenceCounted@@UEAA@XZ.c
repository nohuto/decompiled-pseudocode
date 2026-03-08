/*
 * XREFs of ??1ReferenceCounted@@UEAA@XZ @ 0x1C000511C
 * Callers:
 *     ??1DXGK_GAMMA_RAMP@@UEAA@XZ @ 0x1C0005094 (--1DXGK_GAMMA_RAMP@@UEAA@XZ.c)
 *     ??_E?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@UEAAPEAXI@Z @ 0x1C0040A70 (--_E-$rc_buffer@U-$AlpcRequest@$07@DispBroker@@@@UEAAPEAXI@Z.c)
 *     ??1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ @ 0x1C006720C (--1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ.c)
 *     ??1DMMVIDEOPRESENTTARGETSET@@UEAA@XZ @ 0x1C0067274 (--1DMMVIDEOPRESENTTARGETSET@@UEAA@XZ.c)
 *     ??1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ @ 0x1C0181D24 (--1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ.c)
 *     ??1DMMVIDPN@@UEAA@XZ @ 0x1C0182038 (--1DMMVIDPN@@UEAA@XZ.c)
 *     ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C03ADF80 (--1DMMVIDEOPRESENTTARGET@@UEAA@XZ.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall ReferenceCounted::~ReferenceCounted(ReferenceCounted *this)
{
  int v2; // edx
  int v3; // r8d

  *(_QWORD *)this = &ReferenceCounted::`vftable';
  if ( *((_DWORD *)this + 2) )
  {
    WdLogSingleEntry1(2LL, *((int *)this + 2));
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          *((_DWORD *)this + 2),
          v2,
          v3,
          0,
          0,
          -1,
          (__int64)L"Reference counted instance being destroyed still has %I64d outstanding references on it!",
          *((int *)this + 2),
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
}
