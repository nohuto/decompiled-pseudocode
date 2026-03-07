__int64 __fastcall DirectComposition::CApplicationChannel::Commit(
        DirectComposition::CApplicationChannel *this,
        bool *a2,
        bool a3,
        char a4,
        const struct DirectComposition::SynchronizationObject *a5,
        struct CMilProtocolBlock *a6,
        unsigned int *a7,
        unsigned int a8)
{
  struct CMilProtocolBlock *v8; // rbx
  unsigned int v10; // r13d
  int v12; // eax
  int v13; // esi
  unsigned int v14; // r15d
  const struct DirectComposition::SynchronizationObject *v15; // r14
  char v16; // r12
  unsigned int *v17; // rsi
  bool v18; // bl
  bool v19; // zf
  bool *v20; // r12
  struct DirectComposition::CBatch *v22[2]; // [rsp+48h] [rbp-49h] BYREF
  DirectComposition::CApplicationChannel *v23; // [rsp+58h] [rbp-39h] BYREF
  struct CMilProtocolBlock *v24; // [rsp+60h] [rbp-31h]
  struct CMilProtocolBlock *v25; // [rsp+68h] [rbp-29h]
  int v26; // [rsp+70h] [rbp-21h]
  char *v27; // [rsp+78h] [rbp-19h]
  int v28; // [rsp+80h] [rbp-11h]
  __int64 v29; // [rsp+88h] [rbp-9h]
  int v30; // [rsp+90h] [rbp-1h]
  struct DirectComposition::CBatch *v31; // [rsp+D8h] [rbp+47h] BYREF
  bool *v32; // [rsp+E0h] [rbp+4Fh]
  bool v33; // [rsp+E8h] [rbp+57h]

  v33 = a3;
  v32 = a2;
  ++*((_DWORD *)this + 96);
  v8 = a6;
  v10 = *((_DWORD *)this + 96);
  LOBYTE(v31) = 0;
  v12 = 0;
  v23 = this;
  v24 = a6;
  v25 = 0LL;
  v26 = 0;
  v27 = 0LL;
  v28 = 0;
  v29 = 0LL;
  v30 = 0;
  if ( __PAIR128__((unsigned __int64)a7, (unsigned __int64)a6) != 0 )
  {
    if ( (*((_BYTE *)this + 241) & 0x20) != 0 )
    {
      do
      {
        if ( !v8 )
          break;
        v12 = DirectComposition::CApplicationChannel::CMilCommandBatchParser::ValidateAndTranslateCommandBlock(
                (DirectComposition::CApplicationChannel::CMilCommandBatchParser *)&v23,
                (char *)v8 + 24,
                *((_DWORD *)v8 + 5));
        v8 = *(struct CMilProtocolBlock **)v8;
      }
      while ( v12 >= 0 );
      v8 = v24;
      a3 = v33;
    }
    else
    {
      v12 = -1073741790;
    }
  }
  v13 = 0;
  if ( v12 < 0 )
    v13 = v12;
  LODWORD(a6) = v13;
  if ( v13 >= 0 )
  {
    if ( a4 )
      *((_BYTE *)this + 240) |= 0x30u;
    if ( v8 )
    {
      v25 = v8;
      v26 = *((_DWORD *)v8 + 5);
      v27 = (char *)v8 + 24;
      v28 = *((_DWORD *)v8 + 6);
    }
    v14 = a8;
    v15 = a5;
    v16 = (char)v31;
    v17 = a7;
    do
    {
      v31 = 0LL;
      v22[0] = 0LL;
      v18 = DirectComposition::CApplicationChannel::BuildBatch(
              this,
              &v31,
              v22,
              v10,
              a3,
              (struct DirectComposition::CApplicationChannel::CMilCommandBatchParser *)&v23,
              v17,
              v14);
      if ( v31 )
      {
        DirectComposition::CApplicationChannel::SubmitBatch(this, v31, v22[0], *((_BYTE *)this + 48) & 1, v15);
        v16 = 1;
      }
      a3 = v33;
    }
    while ( !v18 );
    v13 = (int)a6;
    v19 = v16 == 0;
    v20 = v32;
    if ( v19 )
    {
      v22[0] = (struct DirectComposition::CBatch *)v10;
      v22[1] = *((struct DirectComposition::CBatch **)this + 47);
      *(_OWORD *)((char *)this + 16 * (v10 & 0x7F) + 536) = *(_OWORD *)v22;
    }
    if ( v20 )
      *v20 = *((_DWORD *)this + 131) != 0;
  }
  return (unsigned int)v13;
}
