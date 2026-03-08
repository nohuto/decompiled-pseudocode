/*
 * XREFs of Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C003F048
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000E9C0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C00144B0 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1C00180A0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0018428 (XilRegister_WriteUlong.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 */

__int64 __fastcall Register_SaveRestoreCHTNonArchitecturalRegisters(__int64 a1, char a2)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  unsigned int *v6; // rsi
  unsigned int *v7; // rbp
  int v8; // r8d
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // r8d
  _DWORD v14[4]; // [rsp+20h] [rbp-38h] BYREF

  result = *(_QWORD *)(a1 + 8);
  v14[0] = 35076;
  v14[1] = 35348;
  v14[2] = 35620;
  if ( _bittest64((const signed __int64 *)(result + 336), 0x37u) )
  {
    v5 = 0;
    v6 = v14;
    do
    {
      v7 = (unsigned int *)(*(_QWORD *)(a1 + 24) + *v6);
      result = XilRegister_ReadUlong(a1, v7);
      v8 = result;
      if ( a2 )
      {
        v9 = *(_DWORD *)(a1 + 120);
        if ( (result & 0x2000000) != 0 )
          v10 = v9 | (1 << v5);
        else
          v10 = v9 & ~(1 << v5);
        *(_DWORD *)(a1 + 120) = v10;
      }
      else
      {
        v11 = *(_DWORD *)(a1 + 120);
        v12 = v8 & 0xFDFFFFFF;
        v13 = v8 | 0x2000000;
        if ( !_bittest(&v11, v5) )
          v13 = v12;
        result = XilRegister_WriteUlong(a1, v7, v13);
      }
      ++v5;
      ++v6;
    }
    while ( v5 < 3 );
  }
  return result;
}
