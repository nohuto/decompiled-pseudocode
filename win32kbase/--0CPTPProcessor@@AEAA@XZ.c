CPTPProcessor *__fastcall CPTPProcessor::CPTPProcessor(CPTPProcessor *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax

  CTouchProcessor::CTouchProcessor(this);
  *(_QWORD *)this = &CPTPProcessor::`vftable'{for `CTouchProcessor'};
  *((_QWORD *)this + 20) = &CPTPProcessor::`vftable'{for `IPTPEngineClient'};
  memset((char *)this + 392, 0, 0x70uLL);
  *((_BYTE *)this + 504) = 0;
  memset((char *)this + 552, 0, 0x71CuLL);
  *((_WORD *)this + 1186) = 0;
  v6 = SGDGetUserSessionState(v3, v2, v4, v5);
  *((_QWORD *)this + 298) = 0LL;
  *((_QWORD *)this + 299) = 0LL;
  *((_QWORD *)this + 300) = 0LL;
  *((_QWORD *)this + 301) = 0LL;
  *((_QWORD *)this + 297) = v6 + 3464;
  *((_QWORD *)this + 309) = SGDGetUserSessionState(v8, v7, v9, v10) + 3592;
  v15 = SGDGetUserSessionState(v12, v11, v13, v14);
  *((_DWORD *)this + 95) &= ~2u;
  *((_DWORD *)this + 94) = 0;
  *((_QWORD *)this + 310) = v15 + 3596;
  return this;
}
