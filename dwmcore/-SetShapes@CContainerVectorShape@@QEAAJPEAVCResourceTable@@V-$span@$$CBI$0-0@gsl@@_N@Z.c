__int64 __fastcall CContainerVectorShape::SetShapes(struct CResource ***this, CResourceTable *a2, _QWORD *a3, char a4)
{
  __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbp
  struct CResource **v10; // rax
  __int64 v11; // rsi
  struct CResource *ResourceWithoutType; // r15
  unsigned int v13; // ecx
  struct CResource **v14; // rdx
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // ebx
  struct CResource *v19; // [rsp+30h] [rbp-28h] BYREF

  if ( !a4 )
  {
    v7 = (__int64 *)(this + 13);
    CResource::UnRegisterNNotifiersInternal((CResource *)this, this[13], (unsigned int)(this[14] - this[13]));
    v8 = *v7;
    v7[1] = *v7;
    if ( *a3 > (unsigned __int64)((v7[2] - v8) >> 3) )
    {
      if ( *a3 > 0x1FFFFFFFFFFFFFFFuLL )
        std::_Xlength_error("vector too long");
      std::vector<CVectorShape *>::_Reallocate_exactly(v7, *a3);
    }
  }
  v9 = 0LL;
  v10 = this[14];
  v11 = v10 - this[13];
  if ( *(_DWORD *)a3 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)(unsigned int)v9 >= *a3 )
      {
        gsl::details::terminate((gsl::details *)(unsigned int)v9);
        JUMPOUT(0x1800B91F9LL);
      }
      _mm_lfence();
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *(_DWORD *)(a3[1] + 4 * v9));
      if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
              ResourceWithoutType,
              193LL) )
        break;
      v14 = this[14];
      v19 = ResourceWithoutType;
      if ( v14 == this[15] )
      {
        std::vector<CVectorShape *>::_Emplace_reallocate<CVectorShape *>(this + 13, v14, &v19);
      }
      else
      {
        *v14 = ResourceWithoutType;
        ++this[14];
      }
      v10 = this[14];
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= *(_DWORD *)a3 )
        goto LABEL_11;
    }
    v17 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2003303421, 0x4Du, 0LL);
  }
  else
  {
LABEL_11:
    v15 = CResource::RegisterNNotifiersInternal(
            (CResource *)this,
            &this[13][(unsigned int)v11],
            (unsigned int)(v10 - this[13]) - (unsigned int)v11);
    v17 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x53u, 0LL);
    else
      ((void (__fastcall *)(struct CResource ***, _QWORD, _QWORD))(*this)[9])(this, 0LL, 0LL);
  }
  return v17;
}
