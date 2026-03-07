__int64 __fastcall HalpLbrCaptureStack(unsigned int a1, __int64 a2, _DWORD *a3)
{
  int v3; // r9d
  unsigned int v7; // r8d
  char v8; // di
  unsigned __int64 v9; // rax
  __int64 v10; // r10
  char v11; // si
  char v12; // r11
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rax
  __int64 v18; // rdx

  v3 = 0;
  *a3 = 0;
  if ( !HalpLbrAreOperationsAllowed )
    return 3221225659LL;
  v7 = HalpLbrStackSize;
  if ( a1 < 24 * HalpLbrStackSize )
    return 3221225476LL;
  v8 = HalpArchLbrSupported;
  if ( !HalpArchLbrSupported )
  {
    v9 = __readmsr(0x1C9u);
    v3 = (HalpLbrStackSize - 1) & v9;
  }
  v10 = 0LL;
  if ( HalpLbrStackSize )
  {
    v11 = 63 - HalpLbrMostSignificantFromAddrBit;
    v12 = 63 - HalpLbrMostSignificantToAddrBit;
    do
    {
      if ( v8 )
      {
        v13 = v10 + 5632;
        v14 = v10 + 5376;
      }
      else
      {
        v15 = (v3 - (int)v10) % v7;
        v13 = v15 + 1728;
        v14 = v15 + 1664;
      }
      v16 = __readmsr(v14);
      v17 = __readmsr(v13);
      if ( !v16 )
        break;
      v18 = 3 * v10;
      *(_QWORD *)(a2 + 8 * v18 + 16) = 0LL;
      v10 = (unsigned int)(v10 + 1);
      *(_QWORD *)(a2 + 8 * v18 + 8) = (__int64)(v17 << v12) >> v12;
      *(_QWORD *)(a2 + 8 * v18) = (__int64)(v16 << v11) >> v11;
      *a3 += 24;
    }
    while ( (unsigned int)v10 < v7 );
  }
  return 0LL;
}
