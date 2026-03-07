__int64 __fastcall DebugPrint(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // rcx

  v3 = a3;
  v4 = (unsigned int)a2;
  LOWORD(a2) = *(_WORD *)a1;
  v5 = *(_QWORD *)(a1 + 8);
  __asm { int     2Dh; Windows NT - eax = 1: debug print }
  __debugbreak();
  return DebugPrintAfterInt3(v5, a2, v4, v3);
}
