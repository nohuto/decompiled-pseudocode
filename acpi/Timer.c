__int64 __fastcall Timer(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
  if ( *(_BYTE *)(*((_QWORD *)AcpiInformation + 1) + 8LL) >= 5u )
    *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = KeQueryInterruptTimePrecise(&v3);
  else
    *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = MEMORY[0xFFFFF78000000008];
  return 0LL;
}
