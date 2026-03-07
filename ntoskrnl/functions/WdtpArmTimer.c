__int64 __fastcall WdtpArmTimer(__int64 a1, int a2)
{
  *(_QWORD *)(a1 + 120) = MEMORY[0xFFFFF78000000008];
  *(_DWORD *)(a1 + 128) = a2;
  return ExSetTimer(*(_QWORD *)(a1 + 48));
}
