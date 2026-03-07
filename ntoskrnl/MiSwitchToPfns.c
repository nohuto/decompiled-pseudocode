__int64 __fastcall MiSwitchToPfns(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rcx
  int v8; // eax
  unsigned __int64 v9; // rcx
  int v10; // edx
  __int64 v11; // rax
  _QWORD *v12; // rax
  unsigned __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  LONGLONG v17; // rcx
  _OWORD v18[3]; // [rsp+30h] [rbp-9h] BYREF
  _OWORD v19[3]; // [rsp+60h] [rbp+27h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+A0h] [rbp+67h] BYREF

  memset(v19, 0, sizeof(v19));
  memset(v18, 0, sizeof(v18));
  MiCreatePfnTemplate((__int64)v19, 128, 0);
  MiCreatePfnTemplate((__int64)v18, 256, 0);
  v3 = 48 * qword_140C6F340 - 0x220000000000LL;
  if ( !qword_140C6F340 && !*(_WORD *)(v3 + 32) )
  {
    MiSetPfnPteFrame(v3, 0LL);
    *(_QWORD *)(v15 + 8) = 0xFFFFF68000000000uLL;
    *(_QWORD *)(v15 + 24) = *(_QWORD *)(v15 + 24) & 0xC000000000000000uLL | 1;
    *(_BYTE *)(v15 + 34) = *(_BYTE *)(v15 + 34) & 0xF8 | 5;
    *(_BYTE *)(v15 + 34) = *(_BYTE *)(v15 + 34) & 0x3F | 0x40;
    *(_QWORD *)(v15 + 40) |= 0x40000000000000uLL;
  }
  v4 = a1 + 352;
  v5 = *(_QWORD *)(v4 + 8);
  if ( (v5 & 1) == 0 )
  {
    v6 = *(_QWORD *)(v4 + 8);
    goto LABEL_6;
  }
  if ( v5 != 1 )
  {
    v6 = v5 ^ (v4 | 1);
    while ( 1 )
    {
LABEL_6:
      if ( !v6 )
        break;
      v8 = *(_DWORD *)(v6 + 24) & 0x1FFFFFFF;
      if ( v8 == 29 )
      {
        if ( (MiFlags & 0x1000) == 0 )
          goto LABEL_28;
      }
      else if ( v8 == 42 )
      {
        v16 = *(_QWORD *)(v6 + 40);
        v17 = *(_QWORD *)(v6 + 32);
        BugCheckParameter4 = 0LL;
        if ( (int)HvlChangeIsolatedMemoryVisibility(v17, v16, v2, &BugCheckParameter4) < 0 )
          KeBugCheckEx(0x1Au, 0x20B314uLL, *(_QWORD *)(v6 + 32), *(_QWORD *)(v6 + 40), BugCheckParameter4);
LABEL_28:
        MiCreateFreePfns(v6);
        *(_DWORD *)(v6 + 24) = 2;
        goto LABEL_17;
      }
      v9 = *(int *)(v6 + 24);
      if ( (v9 & 0x80000000) == 0LL )
      {
        if ( (v9 & 0x1FFFFFFF) <= 0x18 && (v10 = 16777524, _bittest(&v10, v9 & 0x1FFFFFFF)) )
        {
          MiCreateFreePfns(v6);
        }
        else if ( (unsigned int)(v9 - 30) > 2 && (_DWORD)v9 != 6 )
        {
          if ( (unsigned int)v9 > 0x2A || (v11 = 0x5C400C00008LL, !_bittest64(&v11, v9)) )
            MiCreateDescriptorPfns(v6, v19, v18);
        }
      }
LABEL_17:
      v12 = *(_QWORD **)(v6 + 8);
      v13 = v6;
      if ( v12 )
      {
        v7 = (_QWORD *)*v12;
        v6 = *(_QWORD *)(v6 + 8);
        if ( *v12 )
        {
          do
          {
            v6 = (unsigned __int64)v7;
            v7 = (_QWORD *)*v7;
          }
          while ( v7 );
        }
      }
      else
      {
        while ( 1 )
        {
          v6 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v6 || *(_QWORD *)v6 == v13 )
            break;
          v13 = v6;
        }
      }
    }
  }
  result = KeFlushTb(3LL, 2u);
  LODWORD(MiFlags) = MiFlags | 0x10000000;
  return result;
}
