__int64 __fastcall CInteractionRoot::Initialize(CInteractionRoot *this, struct IManipulationContext *a2, char a3)
{
  CInteractionContextWrapper *v5; // rax
  CInteractionContextWrapper *v6; // rax
  CInteractionContextWrapper *v7; // rbx
  CInteractionContextWrapper *v8; // rax
  CInteractionContextWrapper *v9; // rax
  CInteractionContextWrapper *v10; // rax
  char *v11; // rdi
  int v12; // ebx
  __int64 v13; // r8
  struct IInteractionContextWrapper *v15; // [rsp+30h] [rbp-30h] BYREF
  CInteractionContextWrapper *v16; // [rsp+38h] [rbp-28h] BYREF
  struct IInteractionContextWrapper *v17; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-18h] BYREF
  int v19; // [rsp+50h] [rbp-10h]

  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  *((_QWORD *)this + 172) = a2;
  v5 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new();
  if ( !v5 )
  {
    v15 = 0LL;
LABEL_12:
    v12 = -2147024882;
    SAFE_DELETE<IInteractionContextWrapper>((void **)&v15);
    SAFE_DELETE<IInteractionContextWrapper>((void **)&v16);
    SAFE_DELETE<IInteractionContextWrapper>((void **)&v17);
    SAFE_DELETE<IInteractionContextWrapper>((void **)&v18);
    v11 = (char *)this + 24;
    goto LABEL_13;
  }
  v15 = CInteractionContextWrapper::CInteractionContextWrapper(v5);
  if ( !v15 )
    goto LABEL_12;
  v6 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new();
  v7 = v6 ? CInteractionContextWrapper::CInteractionContextWrapper(v6) : 0LL;
  v16 = v7;
  v8 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new();
  if ( !v8 )
    goto LABEL_12;
  v17 = CInteractionContextWrapper::CInteractionContextWrapper(v8);
  if ( !v17 )
    goto LABEL_12;
  v9 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new();
  if ( !v9 )
    goto LABEL_12;
  v10 = CInteractionContextWrapper::CInteractionContextWrapper(v9);
  v18 = (unsigned __int64)v10;
  if ( !v10 )
    goto LABEL_12;
  v11 = (char *)this + 24;
  v12 = CInteractionProcessor::Initialize((CInteractionRoot *)((char *)this + 24), v15, v7, v17, v10, 1);
LABEL_13:
  if ( v12 >= 0 )
  {
    v18 = 0xFFFFFFFF00000001uLL;
    v19 = -805306369;
    v12 = CInteractionProcessor::SetInteractionConfiguration((__int64)v11, 0, 1, &v18, 1u);
    if ( v12 >= 0 )
    {
      v18 = 0xFFFFFFFF00000001uLL;
      v19 = -805306369;
      v12 = CInteractionProcessor::SetInteractionConfiguration((__int64)v11, 0, 2, &v18, 1u);
      if ( v12 >= 0 )
      {
        LODWORD(v15) = -805306369;
        v12 = CInteractionProcessor::SetInteractionConfiguration((__int64)v11, 0, 4, &v15, 1u);
        if ( v12 >= 0 )
        {
          v18 = 0xFFFFFFFF00000001uLL;
          v19 = -805306369;
          v12 = CInteractionProcessor::SetInteractionConfiguration((__int64)v11, 0, 5, &v18, 1u);
          if ( v12 >= 0 )
          {
            v18 = 0xFFFFFFFF00000001uLL;
            v19 = -805306369;
            v12 = CInteractionProcessor::SetInteractionConfiguration((__int64)v11, 0, 3, &v18, 1u);
            if ( v12 >= 0 )
            {
              if ( a3 )
              {
                LOBYTE(v13) = a3;
                (*(void (__fastcall **)(CInteractionRoot *, _QWORD, __int64, __int64))(*(_QWORD *)this + 40LL))(
                  this,
                  0LL,
                  v13,
                  1LL);
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v12;
}
