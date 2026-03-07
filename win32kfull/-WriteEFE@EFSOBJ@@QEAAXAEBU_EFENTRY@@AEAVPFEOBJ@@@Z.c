void __fastcall EFSOBJ::WriteEFE(wchar_t ***this, const struct _EFENTRY *a2, struct PFEOBJ *a3)
{
  wchar_t **v6; // r9
  wchar_t *Src; // r12
  BOOL v8; // r15d
  unsigned int v9; // edi
  wchar_t *v10; // rcx
  unsigned int v11; // r13d
  void *v12; // rax
  const void *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // [rsp+38h] [rbp-40h]
  int v17; // [rsp+90h] [rbp+18h]
  size_t v18; // [rsp+90h] [rbp+18h]

  v17 = (int)a3;
  *((_DWORD *)*this + 16) += *(_DWORD *)(*(_QWORD *)a3 + 128LL);
  v6 = *this;
  if ( !*((_DWORD *)*this + 7) && v6[2] )
  {
    if ( *((_DWORD *)v6 + 6) < *(_DWORD *)(*(_QWORD *)a3 + 128LL) )
    {
      *((_DWORD *)v6 + 7) = 111;
    }
    else if ( v6[5] + 4 <= v6[6] || (unsigned int)EFSOBJ::bGrow((EFSOBJ *)this) )
    {
      *(_QWORD *)(*this)[5] = *(_QWORD *)a2;
      (*this)[5] += 4;
      Src = 0LL;
      v8 = 0;
      v9 = 1;
      v10 = **this;
      if ( v10 )
      {
        Src = **this;
        if ( (*((_BYTE *)a2 + 4) & 2) != 0 )
        {
          v8 = 1;
          LOBYTE(v9) = *((_BYTE *)a2 + 5);
        }
        else
        {
          v8 = (*((_BYTE *)v10 + 129) & 1) == 0;
          LOBYTE(v9) = *((_BYTE *)v10 + 128);
        }
        v9 = (unsigned __int8)v9;
      }
      else
      {
        if ( (*((_BYTE *)a2 + 4) & 1) != 0 )
          Src = (wchar_t *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(0LL) + 32) + 19472LL)
                          + 196LL * *((unsigned __int16 *)a2 + 3));
        if ( (*((_BYTE *)a2 + 4) & 2) != 0 )
        {
          v8 = 1;
          v9 = *((unsigned __int8 *)a2 + 5);
        }
      }
      v11 = *(_DWORD *)(*(_QWORD *)a3 + 128LL);
      v12 = (void *)AllocFreeTmpBuffer(v11);
      v13 = v12;
      if ( v12 )
      {
        memset_0(v12, 0, v11);
        v18 = cjCopyFontDataW((int)(*this)[4], (int)v13, v17, *(_DWORD *)a2, Src, v9, v8, v16);
        memmove((*this)[2], v13, v18);
        FreeTmpBuffer(v13, v14, v15);
        (*this)[2] = (wchar_t *)((char *)(*this)[2] + v18);
        *((_DWORD *)*this + 6) -= v18;
      }
      else
      {
        *((_DWORD *)*this + 7) = 8;
      }
    }
    else
    {
      *((_DWORD *)*this + 7) = 14;
    }
  }
}
