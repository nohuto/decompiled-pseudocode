/*
 * XREFs of ??$_Uninitialized_move@PEAVDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAPEAVDeviceInfo@CDeviceManager@@QEAV12@0PEAV12@AEAV?$allocator@VDeviceInfo@CDeviceManager@@@0@@Z @ 0x1800CD444
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAVCD3DDevice@@@?$vector@VDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@QEAAPEAVDeviceInfo@CDeviceManager@@QEAV23@AEAPEAVCD3DDevice@@@Z @ 0x1800CD348 (--$_Emplace_reallocate@AEAPEAVCD3DDevice@@@-$vector@VDeviceInfo@CDeviceManager@@V-$allocator@VDe.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAXPEAVDeviceInfo@CDeviceManager@@QEAV12@AEAV?$allocator@VDeviceInfo@CDeviceManager@@@0@@Z @ 0x180103AE4 (--$_Destroy_range@V-$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAXPEAVDeviceInfo@CDevice.c)
 */

char *__fastcall std::_Uninitialized_move<CDeviceManager::DeviceInfo *>(_QWORD *a1, _QWORD *a2, char *a3)
{
  _QWORD *v5; // rax
  signed __int64 v6; // r9
  char *v7; // r10
  char *v8; // rdx

  v5 = a1;
  if ( a1 != a2 )
  {
    v6 = (char *)a1 - a3;
    v7 = (char *)(a3 - (char *)a1);
    do
    {
      *(_QWORD *)a3 = 0LL;
      v8 = (char *)v5 + (_QWORD)v7;
      v8[8] = 0;
      *(_QWORD *)a3 = *v5;
      a3 += 16;
      v8[8] = *((_BYTE *)v5 + (_QWORD)v7 + v6 + 8);
      *v5 = 0LL;
      v5 += 2;
    }
    while ( v5 != a2 );
  }
  std::_Destroy_range<std::allocator<CDeviceManager::DeviceInfo>>(a3, a3);
  return a3;
}
