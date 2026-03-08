/*
 * XREFs of ?OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C0211FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C01FC878 (-OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     ?UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z @ 0x1C0212B18 (-UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z.c)
 *     IsPublicPointerDevice @ 0x1C0218060 (IsPublicPointerDevice.c)
 */

__int64 __fastcall CHidInput::OnRIMDeviceOpened(CHidInput *this, struct DEVICEINFO *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  void *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  CTouchProcessor *v12; // rcx

  v4 = 0;
  if ( (*((_DWORD *)a2 + 50) & 0x80u) != 0 )
  {
    v7 = *(void **)a2;
    if ( *(_QWORD *)(SGDGetUserSessionState(this, a2, a3, a4) + 3424) )
    {
      SGDGetUserSessionState(v9, v8, v10, v11);
      CTouchProcessor::OnRimDeviceOpened(v12, v7);
    }
  }
  if ( (unsigned int)IsPublicPointerDevice(a2) )
    return CHidInput::UpdatePointerDeviceCount(this, 1u);
  return v4;
}
