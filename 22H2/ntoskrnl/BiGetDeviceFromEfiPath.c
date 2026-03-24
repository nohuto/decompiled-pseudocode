/*
 * XREFs of BiGetDeviceFromEfiPath @ 0x1409720A4
 * Callers:
 *     BiCreateMergedBootEntry @ 0x140971504 (BiCreateMergedBootEntry.c)
 *     BiUpdateBcdObject @ 0x140972EE0 (BiUpdateBcdObject.c)
 * Callees:
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     BiTranslateFilePath @ 0x140972D78 (BiTranslateFilePath.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiGetDeviceFromEfiPath(char *Src, _QWORD *a2, _DWORD *a3)
{
  char v3; // al
  unsigned int v6; // ebx
  char *i; // rbx
  unsigned int v8; // ebx
  char *PoolWithTag; // rax
  char *v10; // rsi
  int v11; // eax
  char *v12; // rdi
  unsigned int v13; // ebp
  _DWORD *v14; // rax
  _DWORD *v15; // r14
  _QWORD *v16; // rax
  PVOID P; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v19; // [rsp+68h] [rbp+10h]

  v19 = a2;
  v3 = *Src;
  P = 0LL;
  if ( (v3 & 0x7F) == 0x7F )
  {
    return (unsigned int)-1073741766;
  }
  else
  {
    for ( i = &Src[*((unsigned __int16 *)Src + 1)];
          (*i & 0x7F) != 0x7F && (*i != 4 || i[1] != 4);
          i += *((unsigned __int16 *)i + 1) )
    {
      ;
    }
    v8 = (_DWORD)i - (_DWORD)Src;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v8 + 16, 0x4B444342u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_DWORD *)PoolWithTag = 1;
      *((_DWORD *)PoolWithTag + 1) = v8 + 16;
      *((_DWORD *)PoolWithTag + 2) = 4;
      memmove(PoolWithTag + 12, Src, v8);
      *(_DWORD *)&v10[v8 + 12] = 327551;
      v11 = BiTranslateFilePath(v10, 3LL, &P);
      v12 = (char *)P;
      v6 = v11;
      if ( v11 >= 0 )
      {
        v13 = *((_DWORD *)P + 1) - 12;
        v14 = ExAllocatePoolWithTag(PagedPool, v13 + 20, 0x4B444342u);
        v15 = v14;
        if ( v14 )
        {
          memset(v14, 0, v13 + 20);
          *v15 = 2;
          memmove(v15 + 5, v12 + 12, v13);
          v16 = v19;
          *a3 = v13 + 20;
          *v16 = v15;
        }
        else
        {
          v6 = -1073741670;
        }
      }
      if ( v12 )
        ExFreePoolWithTag(v12, 0x4B444342u);
      ExFreePoolWithTag(v10, 0x4B444342u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v6;
}
