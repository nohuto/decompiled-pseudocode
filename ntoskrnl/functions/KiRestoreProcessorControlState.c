__int64 __fastcall KiRestoreProcessorControlState(__int64 a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  __int64 result; // rax
  int v6; // r8d
  unsigned __int64 v7; // rax
  unsigned int v8; // edx

  __writecr0(*(_QWORD *)a1);
  __writecr3(*(_QWORD *)(a1 + 16));
  __writecr4(*(_QWORD *)(a1 + 24));
  __writecr8(*(_QWORD *)(a1 + 160));
  if ( !((unsigned __int8)HvlHyperVRootPartition | (unsigned __int8)VslVsmEnabled) )
  {
    __lgdt((void *)(a1 + 86));
    __lidt((void *)(a1 + 102));
    _RAX = *(_QWORD *)(a1 + 88) + *(unsigned __int16 *)(a1 + 112);
    *(_BYTE *)(_RAX + 5) &= ~2u;
    __asm { ltr     word ptr [rcx+70h] }
    LOWORD(_RAX) = *(_WORD *)(a1 + 114);
    __asm { lldt    ax }
  }
  _mm_setcsr(*(_DWORD *)(a1 + 116));
  __writedr(7u, 0LL);
  v2 = *(_QWORD *)(a1 + 40);
  __writedr(0, *(_QWORD *)(a1 + 32));
  __writedr(1u, v2);
  v3 = *(_QWORD *)(a1 + 56);
  __writedr(2u, *(_QWORD *)(a1 + 48));
  __writedr(3u, v3);
  v4 = *(_QWORD *)(a1 + 72);
  result = 0LL;
  __writedr(6u, 0LL);
  __writedr(7u, v4);
  if ( (__readgsbyte(0x8B22u) & 2) != 0 && (v4 & 0x300) != 0 && (KiCpuTracingFlags & 2) == 0 )
  {
    if ( (v4 & 0x200) != 0 )
      LODWORD(result) = 2;
    if ( (v4 & 0x100) != 0 )
      LODWORD(result) = result | 1;
    v6 = result;
    v7 = __readmsr(0x1D9u);
    v8 = HIDWORD(v7);
    result = v6 | (unsigned int)v7 & 0xFFFFFFFC;
    __writemsr(0x1D9u, __PAIR64__(v8, result));
  }
  return result;
}
