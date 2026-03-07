char __fastcall IvtInitializeMTRR(__int64 a1)
{
  _QWORD *v1; // r11
  unsigned __int64 v2; // rax
  __int16 v3; // r8
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // r10
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v1 = *(_QWORD **)(a1 + 8);
  v2 = __readmsr(0xFEu);
  v3 = v2 & 0x5FF;
  v4 = __readmsr(0x2FFu);
  LOBYTE(v5) = (v3 & 0x100) != 0LL;
  if ( (((v4 & 0x400) != 0) & (unsigned __int8)v5) != 0 )
  {
    v1[36] = __readmsr(0x250u);
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    v1[37] = __readmsr(0x258u);
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    v1[38] = __readmsr(0x259u);
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    v1[39] = __readmsr(0x268u);
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    v1[40] = __readmsr(0x269u);
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    v1[41] = __readmsr(0x26Au);
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    v1[42] = __readmsr(0x26Bu);
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    v1[43] = __readmsr(0x26Cu);
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    v1[44] = __readmsr(0x26Du);
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    v1[45] = __readmsr(0x26Eu);
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    v5 = __readmsr(0x26Fu);
    v1[46] = v5;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  }
  v6 = 0;
  if ( (_BYTE)v3 )
  {
    do
    {
      v7 = 2 * v6;
      v1[v7 + 48] = __readmsr((int)v7 + 512);
      _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
      v5 = __readmsr((int)v7 + 513);
      v1[(unsigned int)(v7 + 1) + 48] = ((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5;
      _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
      LOBYTE(v5) = ++v6;
    }
    while ( v6 < (unsigned __int64)(unsigned __int8)v3 );
  }
  if ( (v3 & 0x100) == 0 )
    v4 &= ~0x400uLL;
  v1[33] = v4;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return v5;
}
