__int64 __fastcall MiZeroPageWrite(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r15
  __int64 v6; // r9
  struct _MDL *Mdl; // rbx
  __int64 v8; // rdi
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rdi
  CSHORT MdlFlags; // r12
  CSHORT v12; // r12
  struct _MDL *v13; // rdx
  __int64 v14; // rsi
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned __int64 v17; // r13
  CSHORT v18; // ax
  struct _MDL *v19; // rcx
  __int64 v20; // rdx
  NTSTATUS v21; // r15d
  int v23; // [rsp+40h] [rbp-C0h]
  __int16 v24; // [rsp+48h] [rbp-B8h]
  __int16 Object; // [rsp+50h] [rbp-B0h] BYREF
  char v26; // [rsp+52h] [rbp-AEh]
  char v27; // [rsp+53h] [rbp-ADh]
  int v28; // [rsp+54h] [rbp-ACh]
  _QWORD v29[2]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v30; // [rsp+68h] [rbp-98h]
  _DWORD v31[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h]
  __int64 v33; // [rsp+80h] [rbp-80h]
  _BYTE v34[176]; // [rsp+90h] [rbp-70h] BYREF

  v31[1] = 0;
  v5 = a3;
  v30 = a2;
  v33 = a1;
  v24 = a3;
  v27 = 0;
  memset(v34, 0, sizeof(v34));
  Mdl = 0LL;
  v8 = (unsigned int)v5;
  v9 = (unsigned __int64)(v5 + 4095) >> 12;
  if ( a4 && (unsigned int)v5 > a4 )
    v8 = a4;
  if ( (unsigned int)v8 > 0x10000 )
    Mdl = (struct _MDL *)IopAllocateMdl(0LL, v8, 0, v6, 0LL, 0);
  v10 = (unsigned __int64)(v8 + 4095) >> 12;
  if ( Mdl )
  {
    MdlFlags = Mdl->MdlFlags;
  }
  else
  {
    Mdl = (struct _MDL *)v34;
    MdlFlags = 0;
    if ( (unsigned int)v10 > 0x10 )
      LODWORD(v10) = 16;
  }
  v23 = 0;
  v12 = MdlFlags | 0x4002;
  v13 = Mdl + 1;
  LODWORD(v14) = v10;
  while ( 1 )
  {
    v15 = v9;
    if ( (unsigned int)v14 <= (unsigned int)v9 )
      v15 = v14;
    v14 = v15;
    v16 = v15 << 12;
    if ( (_DWORD)v9 == v15 )
    {
      LODWORD(v10) = v9;
      if ( (v5 & 0xFFF) != 0 )
        v16 = (v5 & 0xFFF | (unsigned int)v16) - 4096;
    }
    v17 = (unsigned int)v16;
    Mdl->ByteCount = v16;
    v18 = 8 * (((unsigned __int64)(v16 + 4095) >> 12) + 6);
    v19 = v13;
    Mdl->Next = 0LL;
    Mdl->Size = v18;
    Mdl->StartVa = 0LL;
    Mdl->ByteOffset = 0;
    Mdl->MdlFlags = v12;
    if ( (_DWORD)v14 )
    {
      v20 = v14;
      do
      {
        v19->Next = (struct _MDL *)qword_140C69390;
        v19 = (struct _MDL *)((char *)v19 + 8);
        --v20;
      }
      while ( v20 );
    }
    Object = 0;
    v29[1] = v29;
    v28 = 0;
    v29[0] = v29;
    v31[0] = 0;
    v32 = 0LL;
    v26 = 6;
    v21 = MiSynchronousPageWrite(v33, (_DWORD)Mdl, (_DWORD)v30, (unsigned int)&Object, 0, 0LL, (__int64)v31);
    if ( v21 >= 0 )
    {
      KeWaitForSingleObject(&Object, WrPageOut, 0, 0, 0LL);
      v21 = v31[0];
    }
    if ( _bittest16(&Mdl->MdlFlags, 9u) )
      MiRetardMdl(Mdl);
    if ( (Mdl->MdlFlags & 1) != 0 )
      MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
    if ( v21 < 0 )
      break;
    LODWORD(v9) = v9 - v14;
    *v30 += v17;
    if ( v23 )
    {
      --v23;
    }
    else if ( (unsigned int)v14 < (unsigned int)v10 )
    {
      LODWORD(v14) = v10;
    }
LABEL_25:
    v13 = Mdl + 1;
    if ( !(_DWORD)v9 )
      goto LABEL_26;
    LOWORD(v5) = v24;
  }
  v23 = 8;
  if ( MiIsRetryIoStatus(v21, v17) && (_DWORD)v14 != 1 )
  {
    LODWORD(v14) = (unsigned int)v14 >> 1;
    goto LABEL_25;
  }
LABEL_26:
  if ( Mdl != (struct _MDL *)v34 )
    IoFreeMdl(Mdl);
  return (unsigned int)v21;
}
