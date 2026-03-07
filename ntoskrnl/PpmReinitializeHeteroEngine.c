void __fastcall PpmReinitializeHeteroEngine(char a1, char a2)
{
  int v2; // eax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
    v2 = 2048;
  else
    v2 = 4096;
  v3 = v2;
  if ( a2 )
    v3 = v2 | 0x4000;
  PpmReapplyPerfPolicy(&v3);
}
