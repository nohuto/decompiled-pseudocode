bool __fastcall PiUEventIsClientStuck(__int64 a1)
{
  char v1; // r8

  v1 = 0;
  if ( *(_DWORD *)(a1 + 128) )
    return *(unsigned int *)(a1 + 128)
         * ((MEMORY[0xFFFFF78000000014] - *(_QWORD *)(*(_QWORD *)(a1 + 112) + 16LL))
          / 10000LL) > 600000;
  return v1;
}
