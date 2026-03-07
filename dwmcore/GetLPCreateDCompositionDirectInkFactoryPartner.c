__int64 __fastcall GetLPCreateDCompositionDirectInkFactoryPartner(FARPROC *a1)
{
  signed int v1; // ebx
  FARPROC ProcAddress; // rax
  HMODULE LibraryW; // rax
  signed int LastError; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx

  v1 = dword_1803E7780;
  if ( dword_1803E7780 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, dword_1803E7780, 0x18u, 0LL);
    goto LABEL_13;
  }
  ProcAddress = (FARPROC)qword_1803E7778;
  if ( qword_1803E7778 )
    goto LABEL_11;
  SetLastError(0);
  LibraryW = LoadLibraryW(L"Windows.UI.Input.Inking.dll");
  if ( LibraryW )
  {
    ProcAddress = GetProcAddress(LibraryW, "CreateDCompositionDirectInkFactoryPartner");
    qword_1803E7778 = (__int64)ProcAddress;
    if ( !ProcAddress )
    {
      v1 = -2147467261;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147467261, 0x23u, 0LL);
      goto LABEL_13;
    }
LABEL_11:
    *a1 = ProcAddress;
    goto LABEL_13;
  }
  LastError = GetLastError();
  v1 = LastError;
  if ( LastError > 0 )
    v1 = (unsigned __int16)LastError | 0x80070000;
  if ( v1 >= 0 )
    v1 = -2003304445;
  MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v1, 0x1Du, 0LL);
LABEL_13:
  dword_1803E7780 = v1;
  return (unsigned int)v1;
}
