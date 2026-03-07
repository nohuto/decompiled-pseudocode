void __fastcall SetBitMask(struct tagWND *a1, unsigned int a2, int a3)
{
  struct tagVWPLGESTUREDATA *GCData; // rax
  unsigned __int64 v6; // rcx
  char v7; // di
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax

  GCData = GetGCData(a1);
  v6 = a2;
  v7 = a2 & 7;
  v8 = v6 >> 3;
  v9 = *(_QWORD *)GCData;
  v10 = *(unsigned __int8 *)(v8 + *(_QWORD *)GCData);
  if ( a3 )
    v11 = v10 | (1 << v7);
  else
    v11 = v10 & ~(1 << v7);
  *(_BYTE *)(v8 + v9) = v11;
}
