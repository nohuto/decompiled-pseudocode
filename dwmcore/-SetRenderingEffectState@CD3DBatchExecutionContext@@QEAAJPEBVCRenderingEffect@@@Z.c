__int64 __fastcall CD3DBatchExecutionContext::SetRenderingEffectState(
        CD3DBatchExecutionContext *this,
        const struct CRenderingEffect *a2)
{
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // esi
  __int64 v7; // rdi
  int v8; // r9d
  int v9; // r8d
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v13; // r9
  unsigned __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  if ( *((_QWORD *)this + 6) && !*((_BYTE *)this + 80) )
  {
    v14 = *(_QWORD *)(*((_QWORD *)this + 4) + 416LL);
    (*(void (__fastcall **)(_QWORD, __int64, __int64, unsigned __int64 *))(**((_QWORD **)this + 2) + 56LL))(
      *((_QWORD *)this + 2),
      2LL,
      1LL,
      &v14);
    v15 = *(_QWORD *)(*((_QWORD *)this + 4) + 704LL);
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)this + 2) + 128LL))(
      *((_QWORD *)this + 2),
      1LL,
      1LL,
      &v15);
    *((_BYTE *)this + 80) = 1;
  }
  v4 = (*(__int64 (__fastcall **)(const struct CRenderingEffect *, CD3DBatchExecutionContext *, char *))(*(_QWORD *)a2 + 32LL))(
         a2,
         this,
         (char *)this + 68);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x1C3u, 0LL);
  }
  else
  {
    v7 = *((_QWORD *)this + 4);
    if ( *(_BYTE *)(v7 + 168) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 1) + 560LL)
                                                                                      + 384LL))(
        *(_QWORD *)(*((_QWORD *)this + 1) + 560LL),
        *(_QWORD *)(v7 + 160),
        0LL,
        0LL,
        v7 + 176,
        0,
        0);
      *(_BYTE *)(v7 + 168) = 0;
    }
    v8 = *((_DWORD *)this + 17);
    if ( v8 >= 0 )
    {
      v9 = *((_DWORD *)this + 17) & 4;
      LOBYTE(v14) = v9 != 0;
      BYTE1(v14) = (v8 & 8) != 0;
      BYTE2(v14) = (v8 & 2) != 0;
      BYTE3(v14) = (v8 & 0x10) != 0;
      HIDWORD(v14) = (v8 & 1) != 0 ? 4 : 2;
      v10 = HIDWORD(v14);
      v11 = v14 >> 24;
      BYTE1(v14) = BYTE3(v14);
      if ( (_BYTE)v14 != *((_BYTE *)this + 72)
        || (_BYTE)v11 != *((_BYTE *)this + 73)
        || (_DWORD)v10 != *((_DWORD *)this + 19) )
      {
        if ( (_DWORD)v10 == 2 )
        {
          v13 = v9 != 0 ? 2 : 0;
        }
        else if ( (_DWORD)v10 == 4 )
        {
          v13 = v9 != 0 ? 3LL : 1LL;
        }
        else
        {
          v13 = 4LL;
        }
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 136LL))(
          *((_QWORD *)this + 2),
          *(_QWORD *)(*((_QWORD *)this + 1) + 8 * (v13 + (-(__int64)((_BYTE)v11 != 0) & 4) + 193)));
        *((_QWORD *)this + 9) = v14;
        *((_BYTE *)this + 81) = 1;
      }
    }
  }
  return v6;
}
