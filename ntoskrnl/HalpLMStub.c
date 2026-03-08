/*
 * XREFs of HalpLMStub @ 0x140411C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpLMStub()
{
  unsigned __int64 v0; // rax
  __int64 v1; // rdi
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  __writecr3(v0);
  v2 = __readcr4();
  v2 ^= 0x80uLL;
  __writecr4(v2);
  v3 = __readcr3();
  __writecr3(v3);
  __writecr4(v2 ^ 0x80);
  LODWORD(v3) = *(_DWORD *)(v1 + 128);
  v4 = *(unsigned int *)(v1 + 132);
  __wbinvd();
  __writemsr(0x277u, __PAIR64__(v4, v3));
  __wbinvd();
  v5 = __readcr4();
  v5 ^= 0x80uLL;
  __writecr4(v5);
  _RAX = __readcr3();
  __writecr3(_RAX);
  v5 ^= 0x80uLL;
  __writecr4(v5);
  __lgdt((void *)(v1 + 230));
  __lidt((void *)(v1 + 246));
  LOWORD(_RAX) = *(_WORD *)(v1 + 258);
  __asm { lldt    ax }
  v7 = *(_QWORD *)(v1 + 232);
  LOBYTE(v5) = *(_BYTE *)(v7 + 85);
  *(_BYTE *)(v7 + 85) = v5 | 0x80;
  __DS__ = *(_WORD *)(v1 + 442);
  *(_BYTE *)(v7 + 85) = v5;
  v8 = *(_QWORD *)(v1 + 232) + *(unsigned __int16 *)(v1 + 256);
  *(_BYTE *)(v8 + 5) &= ~2u;
  __asm { ltr     word ptr [rdi+100h] }
  return HalpLMStubVmTarget(v5, v4);
}
