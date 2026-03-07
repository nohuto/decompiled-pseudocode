__int64 __fastcall CDataStreamWriter::EndItem(CDataStreamWriter *this)
{
  unsigned int *v1; // r8
  unsigned int v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // ecx
  __int64 v6; // r10
  unsigned int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // eax
  __int64 result; // rax
  __int64 v11; // rdx
  unsigned int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (unsigned int *)((char *)this + 56);
  if ( *((_QWORD *)this + 6) || *v1 )
  {
    v3 = *v1;
    v4 = -2147024362;
    v5 = (*v1 + 3) & 0xFFFFFFFC;
    if ( v5 < *v1 )
    {
      v11 = 259LL;
    }
    else
    {
      v6 = *((_QWORD *)this + 4);
      *v1 = v5;
      v7 = v5 - v3;
      v8 = *(_DWORD *)(v6 + 20);
      if ( v8 + v7 < v8 )
      {
        *(_DWORD *)(v6 + 20) = -1;
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024362, 0x247u, 0LL);
      }
      else
      {
        *(_DWORD *)(v6 + 20) = v8 + v7;
        v9 = *((_DWORD *)this + 11);
        if ( v9 + v7 >= v9 )
        {
          *((_DWORD *)this + 11) = v9 + v7;
          **((_DWORD **)this + 6) = *v1;
          result = 0LL;
          *((_QWORD *)this + 6) = 0LL;
          *v1 = 0;
          return result;
        }
        *((_DWORD *)this + 11) = -1;
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024362, 0x248u, 0LL);
      }
      v11 = 264LL;
    }
  }
  else
  {
    v4 = -2147418113;
    v11 = 240LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\datastreamwriter.cpp",
    (const char *)v4,
    v12);
  return v4;
}
