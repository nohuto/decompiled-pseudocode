PEPROCESS __fastcall MiShadowTopLevelPxes(__int64 a1, __int64 a2, int a3)
{
  PEPROCESS result; // rax
  __int64 v5; // rbp
  __int64 v6; // r12
  struct _LIST_ENTRY *Flink; // r13
  __int64 v8; // rsi
  _BYTE *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  bool v16; // zf

  result = 0LL;
  v5 = a2;
  if ( (MiFlags & 0x600000) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 1928);
    if ( v6 )
    {
      result = PsInitialSystemProcess;
      if ( PsInitialSystemProcess )
      {
        Flink = PsInitialSystemProcess[1].ProcessListEntry.Flink;
        v8 = ((unsigned int)a2 >> 3) & 0x1FF;
        while ( 1 )
        {
          if ( !_bittest64(qword_140C66C04, (unsigned int)(v8 - 256)) )
            goto LABEL_6;
          v9 = (_BYTE *)(v6 + 8 * v8);
          v10 = MI_READ_PTE_LOCK_FREE((char *)Flink + 8 * v8);
          result = (PEPROCESS)MI_READ_PTE_LOCK_FREE(v9);
          if ( (PEPROCESS)v10 == result )
            goto LABEL_6;
          v11 = v6 + 8 * v8;
          if ( (*v9 & 1) == 0 )
            break;
          result = (PEPROCESS)MiTransformValidPteInPlace(v11, v5, v10, 3LL);
LABEL_6:
          v5 += 8LL;
          v8 = (unsigned int)(v8 + 1);
          if ( !--a3 )
            return result;
        }
        v12 = 0;
        result = (PEPROCESS)MiPteInShadowRange(v11);
        if ( !(_DWORD)result )
        {
LABEL_11:
          *(_QWORD *)v9 = v10;
          if ( v12 )
            result = (PEPROCESS)MiWritePteShadow(v6 + 8 * v8, v10);
          goto LABEL_6;
        }
        result = (PEPROCESS)MiPteHasShadow(v14, v13, v15);
        if ( (_DWORD)result )
        {
          v12 = 1;
          if ( HIBYTE(word_140C6697C) )
            goto LABEL_11;
          v16 = (v10 & 1) == 0;
        }
        else
        {
          result = (PEPROCESS)KeGetCurrentThread();
          if ( (*(_DWORD *)(result->Affinity.StaticBitmap[12] + 2172) & 0x1000) == 0 )
            goto LABEL_11;
          v16 = (v10 & 1) == 0;
        }
        if ( !v16 )
        {
          result = (PEPROCESS)0x8000000000000000LL;
          v10 |= 0x8000000000000000uLL;
        }
        goto LABEL_11;
      }
    }
  }
  return result;
}
