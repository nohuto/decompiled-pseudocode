__int64 __fastcall MI_MAKE_PROTECT_WRITE_COPY(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  bool v8; // zf

  result = MI_READ_PTE_LOCK_FREE(a1);
  if ( (result & 0x80u) != 0LL )
  {
    v3 = result | 0x20;
    v4 = 0;
    result = MiPteInShadowRange(a1);
    if ( !(_DWORD)result )
      goto LABEL_4;
    result = MiPteHasShadow(v6, v5, v7);
    if ( (_DWORD)result )
    {
      v4 = 1;
      if ( !HIBYTE(word_140C6697C) )
      {
        v8 = (v3 & 1) == 0;
        goto LABEL_11;
      }
    }
    else
    {
      result = (__int64)KeGetCurrentThread();
      if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 2172LL) & 0x1000) != 0 )
      {
        v8 = (v3 & 1) == 0;
LABEL_11:
        if ( !v8 )
        {
          result = 0x8000000000000000uLL;
          v3 |= 0x8000000000000000uLL;
        }
      }
    }
LABEL_4:
    *a1 = v3;
    if ( v4 )
      return MiWritePteShadow(a1, v3);
  }
  return result;
}
