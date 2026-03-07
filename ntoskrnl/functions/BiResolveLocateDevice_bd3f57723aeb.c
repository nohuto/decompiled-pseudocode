__int64 __fastcall BiResolveLocateDevice(int a1, _DWORD *a2)
{
  __int64 v2; // r14
  const WCHAR *v3; // r14
  WCHAR *v6; // rsi
  int v7; // eax
  int v8; // edx
  unsigned int ElementData; // ebx
  __int64 Pool2; // rax
  const WCHAR *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v15; // [rsp+20h] [rbp-49h] BYREF
  UNICODE_STRING Destination; // [rsp+28h] [rbp-41h] BYREF
  __int128 v17; // [rsp+38h] [rbp-31h] BYREF
  __int128 v18; // [rsp+48h] [rbp-21h]
  __int128 v19; // [rsp+58h] [rbp-11h]
  _OWORD v20[2]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v21; // [rsp+88h] [rbp+1Fh]

  v2 = (unsigned int)a2[6];
  v21 = 0LL;
  v15 = 0;
  *(_QWORD *)&v19 = 0LL;
  v3 = (const WCHAR *)((char *)a2 + v2);
  DWORD2(v19) = 0;
  memset(v20, 0, sizeof(v20));
  v6 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  Destination = 0LL;
  if ( *(_DWORD *)v3 != 2 )
    goto LABEL_16;
  v7 = a2[5];
  if ( !v7 )
  {
    v8 = a2[7];
    if ( (v8 & 0xF000000) == 0x2000000 )
    {
      ElementData = BcdGetElementData(a1, v8, 0, (__int64)&v15);
      if ( ElementData != -1073741789 )
        goto LABEL_17;
      Pool2 = ExAllocatePool2(258LL, v15, 1262764866LL);
      v6 = (WCHAR *)Pool2;
      if ( !Pool2 )
      {
        ElementData = -1073741670;
        goto LABEL_17;
      }
      BcdGetElementData(a1, a2[7], Pool2, (__int64)&v15);
      v11 = v6;
      goto LABEL_10;
    }
LABEL_16:
    ElementData = -1073741637;
    goto LABEL_17;
  }
  if ( v7 != 1 )
    goto LABEL_16;
  v11 = (const WCHAR *)(a2 + 8);
LABEL_10:
  v12 = -1LL;
  v13 = -1LL;
  do
    ++v13;
  while ( v3[v13 + 10] );
  do
    ++v12;
  while ( v11[v12] );
  Destination.MaximumLength = 2 * (v13 + v12 + 1);
  Destination.Buffer = (wchar_t *)ExAllocatePool2(258LL, (unsigned __int16)(2 * (v13 + v12) + 2), 1262764866LL);
  if ( !Destination.Buffer )
  {
    ElementData = -1073741670;
    goto LABEL_19;
  }
  RtlAppendUnicodeToString(&Destination, v3 + 10);
  RtlAppendUnicodeToString(&Destination, v11);
  LODWORD(v17) = 48;
  *(_QWORD *)&v18 = &Destination;
  *((_QWORD *)&v17 + 1) = 0LL;
  DWORD2(v18) = 576;
  v19 = 0LL;
  ElementData = ZwQueryAttributesFile((__int64)&v17, (__int64)v20);
LABEL_17:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0x4B444342u);
LABEL_19:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  return ElementData;
}
