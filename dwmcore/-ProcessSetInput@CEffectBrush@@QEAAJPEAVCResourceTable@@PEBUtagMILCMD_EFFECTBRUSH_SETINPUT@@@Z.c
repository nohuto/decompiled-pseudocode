__int64 __fastcall CEffectBrush::ProcessSetInput(
        CEffectBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_EFFECTBRUSH_SETINPUT *a3)
{
  const struct CResource *ResourceWithoutType; // rax
  __int64 v6; // rcx
  struct CResource *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rbp
  struct CResource *v11; // rdx
  unsigned int v12; // ebx
  unsigned int v14; // [rsp+20h] [rbp-18h]

  if ( *((_QWORD *)this + 12) )
  {
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 3));
    v7 = ResourceWithoutType;
    if ( ResourceWithoutType && !CEffectBrush::IsValidInputResource(ResourceWithoutType) )
    {
      v14 = 270;
    }
    else
    {
      v8 = *((unsigned int *)a3 + 2);
      if ( (unsigned int)v8 < *((_DWORD *)this + 36) )
      {
        v9 = *((_QWORD *)this + 15);
        v10 = (unsigned int)v8;
        v11 = *(struct CResource **)(v9 + 8 * v8);
        if ( v11 )
        {
          CResource::UnRegisterNotifierInternal(this, v11);
          *(_QWORD *)(v9 + 8 * v10) = 0LL;
        }
        if ( v7 )
        {
          *(_QWORD *)(*((_QWORD *)this + 15) + 8LL * *((unsigned int *)a3 + 2)) = v7;
          CResource::RegisterNotifier(this, v7);
        }
        (*(void (__fastcall **)(CEffectBrush *, __int64))(*(_QWORD *)this + 72LL))(this, 14LL);
        return 0;
      }
      v14 = 275;
    }
    v12 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003303421, v14, 0LL);
    return v12;
  }
  return 0;
}
