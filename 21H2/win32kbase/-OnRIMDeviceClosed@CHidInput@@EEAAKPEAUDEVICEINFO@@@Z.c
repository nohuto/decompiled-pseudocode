/*
 * XREFs of ?OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C00B4940
 * Callers:
 *     <none>
 * Callees:
 *     IsPublicPointerDevice @ 0x1C00B49B8 (IsPublicPointerDevice.c)
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C01976B4 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     ?UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z @ 0x1C01AAB48 (-UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z.c)
 */

__int64 __fastcall CHidInput::OnRIMDeviceClosed(CHidInput *this, void **a2)
{
  struct DEVICEINFO *v3; // r8
  unsigned int v4; // edi
  __int64 v5; // r8
  int v6; // r9d
  CHidInput *v7; // r10
  CTouchProcessor *v8; // rcx

  v3 = CBaseInput::_spDevList;
  v4 = 0;
  while ( v3 )
  {
    IsPublicPointerDevice(v3);
    if ( (void **)v5 == a2 )
      break;
    v3 = *(struct DEVICEINFO **)(v5 + 56);
  }
  if ( (unsigned int)IsPublicPointerDevice(a2) )
  {
    v4 = v6 + 1;
    CHidInput::UpdatePointerDeviceCount(v7, 2u);
  }
  v8 = (CTouchProcessor *)*((unsigned int *)a2 + 50);
  if ( (char)v8 < 0 && gpTouchProcessor )
    CTouchProcessor::OnRimDeviceClosed(v8, *a2);
  return v4;
}
