bool __fastcall PsIsComponentEnabled(int a1)
{
  return (a1 & *(_DWORD *)&KeGetCurrentThread()->ApcState.Process[2].IdealProcessor[2]) == 0;
}
