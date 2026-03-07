__int64 __fastcall CPrimitiveGroup::ProcessAddSurfaceResources(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES *a3,
        unsigned int *a4)
{
  unsigned int v4; // ebx
  int v5; // ebp
  struct CResource *ResourceWithoutType; // rax
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // r8d
  int v14; // edi
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  struct CResource *v19; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0;
  if ( *((_DWORD *)a3 + 2) )
  {
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *a4);
      v19 = ResourceWithoutType;
      v11 = (__int64)ResourceWithoutType;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
              ResourceWithoutType,
              42LL) )
      {
        break;
      }
      v12 = *((_DWORD *)this + 40);
      v13 = v12 + 1;
      if ( v12 + 1 < v12 )
      {
        v4 = -2147024362;
        v14 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024362, 0xB5u, 0LL);
        goto LABEL_13;
      }
      v14 = 0;
      if ( v13 > *((_DWORD *)this + 39) )
      {
        v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 136, 8, 1, &v19);
        v14 = v16;
        v4 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xC0u, 0LL);
LABEL_13:
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v14, 0xE9u, 0LL);
          goto LABEL_15;
        }
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 17) + 8LL * v12) = v19;
        *((_DWORD *)this + 40) = v13;
      }
      v4 = v14;
      (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v19 + 8LL))(v19);
      ++a4;
      if ( (unsigned int)++v5 >= *((_DWORD *)a3 + 2) )
        goto LABEL_8;
    }
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0xE1u, 0LL);
LABEL_15:
    CPrimitiveGroup::ReleaseSurfaceResources(this);
  }
  else
  {
LABEL_8:
    CPrimitiveGroup::ReleasePrimitiveCaches(this, 1);
  }
  return v4;
}
