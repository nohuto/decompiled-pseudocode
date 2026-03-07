__int64 __fastcall ResumeThreadQueue(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 488);
  if ( (result & 0x1000000) != 0 && (result & 1) == 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 432) + 416LL) = a2;
    if ( *(_DWORD *)(a1 + 1216) )
      *(_DWORD *)(a1 + 1216) = a2;
    result = *(_QWORD *)(a1 + 448);
    _InterlockedExchange(
      (volatile __int32 *)(result + 20),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    *(_DWORD *)(a1 + 1272) &= ~0x20u;
  }
  return result;
}
