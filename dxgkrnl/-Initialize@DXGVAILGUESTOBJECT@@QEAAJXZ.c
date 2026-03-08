/*
 * XREFs of ?Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ @ 0x1C035D3CC
 * Callers:
 *     ?VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C035DC88 (-VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ.c)
 * Callees:
 *     ?SetVmBusChannel@DXGVAILGUESTOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C0059FA0 (-SetVmBusChannel@DXGVAILGUESTOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?CreateVmBusChannel@@YAJPEAXPEAPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C035C930 (-CreateVmBusChannel@@YAJPEAXPEAPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?CreateVmBusGuestSubscribers@DXGVAILGUESTOBJECT@@IEAAJXZ @ 0x1C035C9BC (-CreateVmBusGuestSubscribers@DXGVAILGUESTOBJECT@@IEAAJXZ.c)
 */

__int64 __fastcall DXGVAILGUESTOBJECT::Initialize(DXGVAILGUESTOBJECT *this, __int64 a2, const struct _GUID *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int VmBusGuestSubscribers; // eax
  struct _GUID v8; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)&v8.Data1 = 0LL;
  v4 = CreateVmBusChannel(0LL, &v8, a3);
  v5 = v4;
  if ( v4 >= 0 )
  {
    DXGVAILGUESTOBJECT::SetVmBusChannel(this, *(struct DXGVMBUSCHANNEL **)&v8.Data1);
    VmBusGuestSubscribers = DXGVAILGUESTOBJECT::CreateVmBusGuestSubscribers(this);
    v5 = VmBusGuestSubscribers;
    if ( VmBusGuestSubscribers < 0 )
    {
      WdLogSingleEntry1(3LL, VmBusGuestSubscribers);
      DXGVAILGUESTOBJECT::SetVmBusChannel(this, 0LL);
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, v4);
  }
  return v5;
}
