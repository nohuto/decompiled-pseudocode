__int64 __fastcall SmQuerySystemInformation(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int SystemInformation; // ebx
  $115DCDF994C6370D29323EAB0E0C9502 v6; // [rsp+20h] [rbp-48h] BYREF

  memset(&v6, 0, sizeof(v6));
  if ( (a1 & 1) != 0 )
    a1 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFFFFEuLL) + 6728);
  KiStackAttachProcess(*(_KPROCESS **)(a1 + 2008), 0, (__int64)&v6);
  SystemInformation = ZwQuerySystemInformation(182LL, a3);
  KiUnstackDetachProcess(&v6);
  return SystemInformation;
}
