char HalpIsCmciImplementedAMD()
{
  __int64 i; // rdi
  __int64 v1; // rbx
  unsigned __int64 v2; // rax
  unsigned int v3; // ebp
  int v4; // esi
  __int64 MsrMisc; // rax

  for ( i = *(_QWORD *)&KeGetPcr()->HalReserved[6]; ; i = *(_QWORD *)(i + 184) )
  {
    if ( !i )
      return 0;
    v1 = *(_QWORD *)(i + 172);
    if ( !HalpMcaNumberOfBanks )
    {
      v2 = __readmsr(0x179u);
      HalpMcaNumberOfBanks = v2;
    }
    v3 = (unsigned __int8)HalpMcaNumberOfBanks;
    v4 = 0;
    if ( HalpMcaNumberOfBanks )
      break;
LABEL_8:
    ;
  }
  while ( 1 )
  {
    MsrMisc = HalpWheaReadMsrMisc(v1, v4);
    if ( MsrMisc < 0 && (MsrMisc & 0x6000000000000000LL) == 0x4000000000000000LL )
      return 1;
    if ( ++v4 >= v3 )
      goto LABEL_8;
  }
}
