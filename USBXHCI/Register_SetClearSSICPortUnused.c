/*
 * XREFs of Register_SetClearSSICPortUnused @ 0x1C0013BD0
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000E9C0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C00144B0 (Controller_WdfEvtDeviceD0Entry.c)
 *     Register_ControllerReset @ 0x1C0018518 (Register_ControllerReset.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1C00180A0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0018428 (XilRegister_WriteUlong.c)
 */

__int64 __fastcall Register_SetClearSSICPortUnused(__int64 a1, char a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  int Ulong; // eax
  unsigned int v7; // eax
  __int64 v8; // r8
  unsigned int v9; // eax
  int v10; // eax

  result = *(_QWORD *)(a1 + 8);
  if ( _bittest64((const signed __int64 *)(result + 336), 0x39u) )
  {
    v5 = *(_QWORD *)(a1 + 24) + 34876LL;
    Ulong = XilRegister_ReadUlong(a1, v5);
    XilRegister_WriteUlong(a1, v5, Ulong & 0xBFFFFFFF);
    v7 = XilRegister_ReadUlong(a1, v5);
    v8 = v7;
    LODWORD(v8) = v7 | 0x80000000;
    v9 = v7 & 0x7FFFFFFF;
    if ( !a2 )
      v8 = v9;
    XilRegister_WriteUlong(a1, v5, v8);
    v10 = XilRegister_ReadUlong(a1, v5);
    return XilRegister_WriteUlong(a1, v5, v10 | 0x40000000u);
  }
  return result;
}
