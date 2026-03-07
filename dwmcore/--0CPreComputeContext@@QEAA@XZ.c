CPreComputeContext *__fastcall CPreComputeContext::CPreComputeContext(CPreComputeContext *this)
{
  __int64 v1; // r8
  __int64 v2; // r9
  CPreComputeContext *result; // rax

  *(_QWORD *)this = (char *)this + 24;
  *((_QWORD *)this + 1) = (char *)this + 24;
  *((_QWORD *)this + 2) = (char *)this + 1392;
  *((_QWORD *)this + 178) = 0LL;
  *((_QWORD *)this + 180) = 0LL;
  *((_DWORD *)this + 358) = 0;
  *((_DWORD *)this + 362) = 0;
  *((_QWORD *)this + 182) = 0LL;
  *((_QWORD *)this + 184) = 0LL;
  *((_DWORD *)this + 366) = 0;
  *((_DWORD *)this + 370) = 0;
  *((_QWORD *)this + 186) = 0LL;
  *((_QWORD *)this + 188) = 0LL;
  *((_DWORD *)this + 374) = 0;
  *((_DWORD *)this + 378) = 0;
  *((_QWORD *)this + 174) = 0LL;
  *((_QWORD *)this + 176) = 0LL;
  *((_DWORD *)this + 350) = 0;
  *((_DWORD *)this + 354) = 0;
  CLightStack::CLightStack((CPreComputeContext *)((char *)this + 1520));
  *(_QWORD *)(v1 + 1760) = v2;
  result = (CPreComputeContext *)v1;
  *(_QWORD *)(v1 + 1776) = v2;
  *(_DWORD *)(v1 + 1768) = v2;
  *(_DWORD *)(v1 + 1784) = v2;
  *(_QWORD *)(v1 + 1792) = v2;
  *(_QWORD *)(v1 + 1800) = v2;
  *(_QWORD *)(v1 + 1808) = v2;
  *(_DWORD *)(v1 + 1816) = v2;
  *(_QWORD *)(v1 + 1824) = v2;
  *(_QWORD *)(v1 + 1832) = v2;
  *(_QWORD *)(v1 + 1840) = v2;
  *(_DWORD *)(v1 + 1848) = v2;
  *(_QWORD *)(v1 + 1856) = v2;
  *(_QWORD *)(v1 + 1864) = v2;
  *(_QWORD *)(v1 + 1872) = v2;
  *(_QWORD *)(v1 + 1916) = v2;
  *(_QWORD *)(v1 + 1928) = v2;
  *(_DWORD *)(v1 + 1936) = v2;
  *(_QWORD *)(v1 + 1908) = 1LL;
  *(_DWORD *)(v1 + 1884) = v2;
  *(_QWORD *)(v1 + 1888) = v2;
  *(_QWORD *)(v1 + 1896) = v2;
  *(_BYTE *)(v1 + 1960) = v2;
  return result;
}
