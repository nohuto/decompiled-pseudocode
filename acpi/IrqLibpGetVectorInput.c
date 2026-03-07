__int64 __fastcall IrqLibpGetVectorInput(unsigned int a1, __int64 a2, _DWORD *a3, _DWORD *a4, _OWORD *a5)
{
  __int64 v10; // r8
  int InputState; // ebx
  int v12; // r10d
  __int128 v13; // xmm0
  _OWORD *v14; // rax
  _QWORD v15[26]; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v16; // [rsp+100h] [rbp+8h] BYREF

  v16 = 0;
  memset(v15, 0, 0xC8uLL);
  if ( !a1 )
    return 3221225485LL;
  IrqLibAcquireArbiterLock(0);
  InputState = ProcessorIdtEntryToGsiv(a1, a2, v10, &v16);
  if ( InputState >= 0 )
  {
    if ( v16 < 0xFFF00000 )
    {
      InputState = IcGetInputState(v16, v15);
      if ( InputState >= 0 )
      {
        InputState = 0;
        v13 = *(_OWORD *)&v15[7];
        *a4 = HIDWORD(v15[3]);
        v14 = a5;
        *a3 = v12;
        *v14 = v13;
      }
    }
    else
    {
      InputState = -1073741811;
    }
  }
  KeSetEvent((PRKEVENT)Object, 0, 0);
  return (unsigned int)InputState;
}
