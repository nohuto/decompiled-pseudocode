__int64 __fastcall MiCopyForkedFixupVad(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  memmove(
    (void *)(a1 + 136),
    (const void *)(a2 + 136),
    8
  * (((unsigned __int64)*(unsigned int *)(***(_QWORD ***)(a2 + 72) + 8LL) >> 6)
   + ((*(_DWORD *)(***(_QWORD ***)(a2 + 72) + 8LL) & 0x3F) != 0)
   + 4LL));
  result = a1 + 168;
  *(_QWORD *)(a1 + 160) = a1 + 168;
  return result;
}
