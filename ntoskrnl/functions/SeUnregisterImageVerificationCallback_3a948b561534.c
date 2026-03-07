void __fastcall SeUnregisterImageVerificationCallback(void *a1)
{
  _InterlockedDecrement(&dword_140D0C78C);
  ExUnregisterCallback(a1);
}
