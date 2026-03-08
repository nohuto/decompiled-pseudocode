/*
 * XREFs of TtmpFindDeviceByToken @ 0x1409A06D8
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x14099F580 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x14099F880 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x14099F940 (TtmNotifyDeviceInput.c)
 * Callees:
 *     <none>
 */

bool __fastcall TtmpFindDeviceByToken(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 *v4; // r10
  __int64 **v5; // rcx
  __int64 *i; // rax

  v4 = 0LL;
  v5 = (__int64 **)(a1 + 96);
  for ( i = *v5; i != (__int64 *)v5; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) == a2 && i[3] == a3 )
    {
      v4 = i;
      break;
    }
  }
  if ( a4 )
    *a4 = v4;
  return v4 != 0LL;
}
