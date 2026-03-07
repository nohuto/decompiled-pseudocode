__int64 __fastcall CConditionalExpression::ProcessAddConditionAnimationResources(
        CConditionalExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CONDITIONALEXPRESSION_ADDCONDITIONANIMATIONRESOURCES *a3,
        unsigned int *a4)
{
  int v4; // r12d
  CResourceTable *v7; // rbx
  unsigned int v9; // edx
  struct CResource *ResourceWithoutType; // rax
  __int64 v11; // rcx
  struct CResource *v12; // rsi
  unsigned int v13; // edx
  struct CResource *v14; // rax
  __int64 v15; // rdi
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // eax
  __int64 v19; // rcx
  __int128 *v20; // rdx
  _OWORD *v21; // rdx
  __int64 v22; // rcx
  int v23; // r9d
  unsigned int v25; // [rsp+20h] [rbp-20h]
  __int128 v26; // [rsp+30h] [rbp-10h] BYREF
  __int64 v28; // [rsp+90h] [rbp+50h] BYREF

  v4 = 0;
  v7 = a2;
  if ( *((_DWORD *)a3 + 2) )
  {
    while ( 1 )
    {
      v9 = *a4;
      v26 = 0LL;
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(v7, v9);
      v12 = ResourceWithoutType;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
              ResourceWithoutType,
              60LL) )
      {
        break;
      }
      (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v12 + 8LL))(v12);
      v13 = a4[1];
      *(_QWORD *)&v26 = v12;
      v14 = CResourceTable::GetResourceWithoutType(v7, v13);
      v15 = (__int64)v14;
      if ( !v14
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v14 + 56LL))(v14, 60LL)
        && !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 56LL))(v15, 112LL) )
      {
        v25 = 88;
        goto LABEL_24;
      }
      v28 = v15;
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v28);
      v28 = 0LL;
      *((_QWORD *)&v26 + 1) = v15;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
      a4 += 2;
      (*(void (__fastcall **)(struct CResource *, CConditionalExpression *))(*(_QWORD *)v12 + 216LL))(v12, this);
      (*(void (__fastcall **)(__int64, CConditionalExpression *))(*(_QWORD *)v15 + 216LL))(v15, this);
      v16 = (*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)v12 + 232LL))(v12);
      v17 = v16;
      if ( v16 < 0 )
      {
        v23 = v16;
        v25 = 102;
        goto LABEL_25;
      }
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 232LL))(v15);
      v17 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x67u, 0LL);
        goto LABEL_26;
      }
      v20 = (__int128 *)*((_QWORD *)this + 44);
      if ( v20 == *((__int128 **)this + 45) )
      {
        std::vector<CConditionalExpression::ConditionExpressionListEntry>::_Emplace_reallocate<CConditionalExpression::ConditionExpressionListEntry>(
          (__int64 *)this + 43,
          (__int64)v20,
          &v26);
      }
      else
      {
        *(_QWORD *)v20 = 0LL;
        if ( v20 != &v26 )
        {
          *(_QWORD *)v20 = v12;
          *(_QWORD *)&v26 = 0LL;
        }
        v21 = (__int128 *)((char *)v20 + 8);
        *(_QWORD *)v21 = 0LL;
        if ( v21 != (__int128 *)((char *)&v26 + 8) )
        {
          *(_QWORD *)v21 = v15;
          *((_QWORD *)&v26 + 1) = 0LL;
        }
        *((_QWORD *)this + 44) += 16LL;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26 + 1);
      v22 = v26;
      if ( (_QWORD)v26 )
      {
        *(_QWORD *)&v26 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
      if ( (unsigned int)++v4 >= *((_DWORD *)a3 + 2) )
        return 0;
      v7 = a2;
    }
    v25 = 76;
LABEL_24:
    v23 = -2003303421;
    v17 = -2003303421;
LABEL_25:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v23, v25, 0LL);
LABEL_26:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26 + 1);
    if ( (_QWORD)v26 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v26 + 16LL))(v26);
  }
  else
  {
    return 0;
  }
  return v17;
}
