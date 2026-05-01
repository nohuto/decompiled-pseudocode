/*
 * XREFs of ?HampExtendedExecutionCheckPolicy@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEAU_RM_PSM_HOST_INFO@@W4_HAM_EXTENDED_EXECUTION_REASON@@@Z @ 0x180028074
 * Callers:
 *     ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x180027CB0 (-HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PE.c)
 * Callees:
 *     ?HampSystemCheckLocationCapability@@YAJPEAXPEAE@Z @ 0x180077D80 (-HampSystemCheckLocationCapability@@YAJPEAXPEAE@Z.c)
 */

__int64 __fastcall HampExtendedExecutionCheckPolicy(unsigned int *a1, void *a2, __int64 a3, int a4)
{
  __int64 v4; // rdi
  const wchar_t *v7; // rdx
  __int64 result; // rax
  int v9; // eax
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // edx
  int v17; // ecx
  int v18; // eax
  int v19; // r9d
  unsigned int v20; // ecx
  unsigned __int8 v21; // [rsp+48h] [rbp+20h] BYREF

  v4 = a4;
  switch ( (_DWORD)v4 )
  {
    case 0:
      goto LABEL_22;
    case 1:
      result = HampSystemCheckLocationCapability(a2, &v21);
      goto LABEL_8;
    case 2:
LABEL_22:
      result = 0LL;
      v21 = 1;
      goto LABEL_8;
    case 3:
      v7 = L"extendedExecutionBackgroundAudio";
      goto LABEL_7;
    case 4:
      v7 = L"extendedExecutionUnconstrained";
LABEL_7:
      result = CapabilityCheck(a2, v7, &v21);
      goto LABEL_8;
  }
  result = 3221225659LL;
LABEL_8:
  if ( (int)result >= 0 )
  {
    if ( v21 )
    {
      v9 = a1[1] | 9;
      v10 = a1[2] | 0x11;
      v11 = v9;
      v12 = v10;
      if ( (_DWORD)v4 != 4 )
      {
        v10 = a1[2] | 0x13;
        v9 = a1[1] | 0x20B;
        v12 = v10;
        v11 = v9;
      }
      if ( (v4 & 0xFFFFFFFB) == 0 || (_DWORD)v4 == 2 )
      {
        v13 = v9 | 4;
        v14 = v10 | 4;
        a1[1] = v13;
        v11 = v13;
        a1[2] = v14;
        v12 = v14;
        a1[92] &= 0xFFFFFFFC;
        *((_QWORD *)a1 + 40) |= 0x20uLL;
      }
      v15 = *a1;
      if ( (_DWORD)v4 == 2 )
        v16 = v15 & 0xFFFFF3FF | 0x800;
      else
        v16 = v15 | 0x400;
      *a1 = v16;
      v17 = 256;
      v18 = 256;
      if ( (_DWORD)v4 != 2 )
      {
        v18 = 64;
        v17 = 128;
      }
      *a1 |= 0x28000u;
      v19 = v17 | v12;
      a1[1] = v18 | v11;
      v20 = dword_1800A39F0[v4];
      a1[2] = v19;
      a1[67] = v20;
      if ( v20 != 5 )
        a1[68] = 300;
      return 0LL;
    }
    else
    {
      return 3221225506LL;
    }
  }
  return result;
}
