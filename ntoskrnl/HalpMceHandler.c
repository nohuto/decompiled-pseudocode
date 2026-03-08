/*
 * XREFs of HalpMceHandler @ 0x140501A34
 * Callers:
 *     HalpHandleMachineCheck @ 0x140500F10 (HalpHandleMachineCheck.c)
 *     HalpMceHandlerWithRendezvous @ 0x140501CF0 (HalpMceHandlerWithRendezvous.c)
 * Callees:
 *     HalpMceHandlerCore @ 0x140501B48 (HalpMceHandlerCore.c)
 */

char __fastcall HalpMceHandler(__int64 a1, __int64 a2)
{
  char v2; // di
  char v3; // bp
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // rbx
  char v9; // al
  __int64 v11; // [rsp+50h] [rbp+18h]
  __int64 v12; // [rsp+50h] [rbp+18h]

  HIDWORD(v11) = 0;
  v2 = 0;
  v3 = a2;
  if ( !HalpHvWheaEnlightenedCpuManager || HalpMceBroadcast )
  {
    v8 = *(_QWORD *)&KeGetPcr()->HalReserved[6];
    while ( v8 )
    {
      LOBYTE(a2) = v3;
      v9 = HalpMceHandlerCore(a1, a2, *(_QWORD *)(v8 + 172));
      v8 = *(_QWORD *)(v8 + 184);
      if ( v9 )
        v2 = 1;
    }
  }
  else
  {
    while ( 1 )
    {
      v5 = __readmsr(0x40000030u);
      v6 = (unsigned __int64)HIDWORD(v5) << 32;
      LOBYTE(v6) = v3;
      v7 = v5;
      LODWORD(v11) = v5;
      if ( (_DWORD)v5 == -1 )
        break;
      if ( (unsigned __int8)HalpMceHandlerCore(a1, v6, v11) )
        v2 = 1;
      __writemsr(0x40000031u, v7);
    }
    HIDWORD(v12) = 1;
    LODWORD(v12) = KeGetPcr()->Prcb.Number & 0x7FFFFFFF;
    if ( (unsigned __int8)HalpMceHandlerCore(a1, v6, v12) )
      return 1;
  }
  return v2;
}
