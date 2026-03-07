__int64 __fastcall CCompositionSurface::NotifyTokenCompleted(CCompositionSurface *this, const struct CFlipToken *a2)
{
  int Buffer; // ebx
  CFlipExBuffer *v5; // rsi
  int inserted; // eax
  __int64 v7; // rdx
  __int64 v8; // rdx
  _OWORD *v9; // rax
  _OWORD *v10; // rcx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  unsigned __int64 v18; // r8
  __int128 v19; // xmm1
  unsigned __int64 v20; // rdx
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int64 v23; // rax
  unsigned __int64 v25; // [rsp+30h] [rbp-D0h] BYREF
  struct CCompositionBuffer *v26; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v27[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v28[464]; // [rsp+50h] [rbp-B0h] BYREF

  Buffer = 0;
  v26 = 0LL;
  CPresentRate::NotifyFrame((CCompositionSurface *)((char *)this + 56));
  if ( *((_QWORD *)this + 13) )
  {
    Buffer = CCompositionSurface::FindBuffer(this, *((_QWORD *)a2 + 5), &v26);
    if ( Buffer >= 0 )
    {
      v27[0] = 0LL;
      v25 = 0LL;
      memset(v28, 0, 0x1C8uLL);
      v5 = CFlipExBuffer::FromBuffer(v26);
      inserted = CFlipExBuffer::InsertCascadedTokenWait(v5, v27, &v25);
      Buffer = inserted;
      if ( inserted >= 0
        || inserted == -1073741267
        && (CFlipExBuffer::DisableCascadedSignaling(v5),
            LOBYTE(v7) = 1,
            Buffer = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 13) + 32LL))(
                       *((_QWORD *)this + 13),
                       v7),
            Buffer >= 0)
        && (Buffer = CCompositionSurface::PairBind(this, v5), Buffer >= 0)
        && (Buffer = CFlipExBuffer::InsertCascadedTokenWait(v5, v27, &v25), Buffer >= 0) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 168LL))(a2) )
        {
          v8 = 3LL;
          v9 = (_OWORD *)((char *)a2 + 104);
          v10 = v28;
          do
          {
            v11 = v9[1];
            *v10 = *v9;
            v12 = v9[2];
            v10[1] = v11;
            v13 = v9[3];
            v10[2] = v12;
            v14 = v9[4];
            v10[3] = v13;
            v15 = v9[5];
            v10[4] = v14;
            v16 = v9[6];
            v10[5] = v15;
            v17 = v9[7];
            v9 += 8;
            v10[6] = v16;
            v10 += 8;
            *(v10 - 1) = v17;
            --v8;
          }
          while ( v8 );
          v18 = v25;
          v19 = v9[1];
          v20 = v27[0];
          *v10 = *v9;
          v21 = v9[2];
          v10[1] = v19;
          v22 = v9[3];
          v23 = *((_QWORD *)v9 + 8);
          v10[2] = v21;
          v10[3] = v22;
          *((_QWORD *)v10 + 8) = v23;
          Buffer = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64, _BYTE *))(**((_QWORD **)this + 13)
                                                                                                  + 40LL))(
                     *((_QWORD *)this + 13),
                     v20,
                     v18,
                     v28);
          if ( Buffer < 0 )
            CFlipExBuffer::InsertCascadedTokenSignal(v5, v25);
        }
      }
    }
  }
  return (unsigned int)Buffer;
}
