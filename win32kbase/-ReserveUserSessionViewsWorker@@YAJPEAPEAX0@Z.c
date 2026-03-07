__int64 __fastcall ReserveUserSessionViewsWorker(void **a1, void **a2, __int64 a3)
{
  int v5; // r14d
  int v6; // ebp
  int v7; // ebx
  int v8; // eax
  ULONG_PTR v9; // rbp
  NTSTATUS Section; // eax
  unsigned int v11; // ebx
  PVOID v12; // rcx
  int v13; // eax
  ULONG v15; // eax
  ULONG v16; // eax
  __int64 v17; // [rsp+20h] [rbp-48h]
  ULONG_PTR v18; // [rsp+80h] [rbp+18h] BYREF
  ULONG_PTR ViewSize; // [rsp+88h] [rbp+20h] BYREF

  if ( qword_1C02D6E28 )
    v5 = qword_1C02D6E28(1LL);
  else
    v5 = 0;
  if ( qword_1C02D6E28 )
    v6 = qword_1C02D6E28(2LL);
  else
    v6 = 0;
  if ( qword_1C02D6E28 )
    v7 = qword_1C02D6E28(0LL);
  else
    v7 = 0;
  v8 = (int)qword_1C02D6E28;
  if ( qword_1C02D6E28 )
    v8 = qword_1C02D6E28(3LL);
  v9 = (unsigned int)(v5 + v7 + 10 * v8 + v6);
  v18 = v9;
  Section = Win32CreateSection(a1, 983071LL, a3, (__int64)&v18, v17, 0x4000000);
  v11 = Section;
  if ( Section < 0 )
  {
    v15 = RtlNtStatusToDosError(Section);
    UserSetLastError(v15);
  }
  else
  {
    *a2 = 0LL;
    v12 = *a1;
    ViewSize = v9;
    v13 = MmMapViewInSessionSpace(v12, a2, &ViewSize);
    v11 = v13;
    if ( v13 < 0 )
    {
      v16 = RtlNtStatusToDosError(v13);
      UserSetLastError(v16);
      ObfDereferenceObject(*a1);
    }
  }
  return v11;
}
