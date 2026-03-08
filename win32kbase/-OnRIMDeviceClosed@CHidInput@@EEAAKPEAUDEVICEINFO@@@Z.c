/*
 * XREFs of ?OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C0211DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C01FC724 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     ?UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z @ 0x1C0212B18 (-UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z.c)
 *     IsPublicPointerDevice @ 0x1C0218060 (IsPublicPointerDevice.c)
 */

__int64 __fastcall CHidInput::OnRIMDeviceClosed(CHidInput *this, void **a2)
{
  unsigned int v3; // edi
  __int64 i; // r8
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  CHidInput *v9; // r10
  __int64 v10; // rcx
  void *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  CTouchProcessor *v16; // rcx

  v3 = 0;
  for ( i = **((_QWORD **)this + 166); i; i = *(_QWORD *)(v5 + 56) )
  {
    IsPublicPointerDevice(i);
    if ( (void **)v5 == a2 )
      break;
  }
  if ( (unsigned int)IsPublicPointerDevice(a2) )
  {
    v3 = v8 + 1;
    CHidInput::UpdatePointerDeviceCount(v9, 2u);
  }
  v10 = *((unsigned int *)a2 + 50);
  if ( (v10 & 0x80u) != 0LL )
  {
    v11 = *a2;
    if ( *(_QWORD *)(SGDGetUserSessionState(v10, v6, v7, v8) + 3424) )
    {
      SGDGetUserSessionState(v13, v12, v14, v15);
      CTouchProcessor::OnRimDeviceClosed(v16, v11);
    }
  }
  return v3;
}
