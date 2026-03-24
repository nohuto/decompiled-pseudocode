/*
 * XREFs of IrqLibpGetVectorInput @ 0x1C002DD90
 * Callers:
 *     <none>
 * Callees:
 *     IrqLibAcquireArbiterLock @ 0x1C000F38C (IrqLibAcquireArbiterLock.c)
 *     IcGetInputState @ 0x1C002DE70 (IcGetInputState.c)
 *     memset @ 0x1C0032480 (memset.c)
 *     ProcessorIdtEntryToGsiv @ 0x1C00A237C (ProcessorIdtEntryToGsiv.c)
 */

__int64 __fastcall IrqLibpGetVectorInput(unsigned int a1, __int64 a2, _DWORD *a3, _DWORD *a4, _OWORD *a5)
{
  __int64 v9; // r8
  int InputState; // ebx
  int v11; // r10d
  __int128 v12; // xmm0
  _OWORD *v13; // rax
  _QWORD v15[26]; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v16; // [rsp+100h] [rbp+8h] BYREF

  v16 = 0;
  memset(v15, 0, 0xC8uLL);
  if ( !a1 )
    return 3221225485LL;
  IrqLibAcquireArbiterLock(0);
  InputState = ProcessorIdtEntryToGsiv(a1, a2, v9, &v16);
  if ( InputState >= 0 )
  {
    if ( v16 >= 0xFFF00000 )
    {
      InputState = -1073741811;
    }
    else
    {
      InputState = IcGetInputState(v16, v15);
      if ( InputState >= 0 )
      {
        InputState = 0;
        v12 = *(_OWORD *)&v15[7];
        *a4 = HIDWORD(v15[3]);
        v13 = a5;
        *a3 = v11;
        *v13 = v12;
      }
    }
  }
  KeSetEvent(Object, 0, 0);
  return (unsigned int)InputState;
}
