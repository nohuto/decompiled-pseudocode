__int64 __fastcall HsaUpdateInterruptDestination(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  int v3; // ecx
  __int64 result; // rax

  switch ( *(_DWORD *)BugCheckParameter4 )
  {
    case 1:
      *(_QWORD *)(BugCheckParameter3 + 8) |= 0xFF00000000000000uLL;
      result = *(_QWORD *)BugCheckParameter3 & 0xFFFFFFFF000000BFuLL | 0xFFFFFF00;
      break;
    case 4:
      *(_BYTE *)(BugCheckParameter3 + 15) = *(_BYTE *)(BugCheckParameter4 + 11);
      result = *(_QWORD *)BugCheckParameter3 & 0xFFFFFFFF000000BFuLL;
      *(_QWORD *)BugCheckParameter3 = result | ((unsigned __int64)(*(_DWORD *)(BugCheckParameter4 + 8) & 0xFFFFFF) << 8);
      return result;
    case 6:
      v3 = *(_DWORD *)(BugCheckParameter4 + 12) | (*(_DWORD *)(BugCheckParameter4 + 8) << 16);
      *(_BYTE *)(BugCheckParameter3 + 15) = HIBYTE(v3);
      result = *(_QWORD *)BugCheckParameter3 ^ (*(_DWORD *)BugCheckParameter3 ^ (v3 << 8)) & 0xFFFFFF00 | 0x40LL;
      break;
    default:
      KeBugCheckEx(0x5Cu, 0x7000uLL, 0x20uLL, BugCheckParameter3, BugCheckParameter4);
  }
  *(_QWORD *)BugCheckParameter3 = result;
  return result;
}
