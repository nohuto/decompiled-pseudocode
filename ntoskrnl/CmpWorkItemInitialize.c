/*
 * XREFs of CmpWorkItemInitialize @ 0x140818A3C
 * Callers:
 *     CmFcManagerInitialize @ 0x140B536B4 (CmFcManagerInitialize.c)
 * Callees:
 *     <none>
 */

void (__fastcall *__fastcall CmpWorkItemInitialize(__int64 a1, int a2, __int64 a3, __int64 a4))(__int64 a1)
{
  void (__fastcall *result)(__int64); // rax

  result = CmpWorkItemWrapper;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = CmpWorkItemWrapper;
  *(_QWORD *)(a1 + 24) = a1;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 44) = a2;
  *(_QWORD *)(a1 + 48) = a3;
  *(_QWORD *)(a1 + 56) = a4;
  return result;
}
