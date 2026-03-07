void __fastcall DC::vComputePageXform(DC *this)
{
  float v1; // xmm1_4
  __int64 v2; // rdx
  float v3; // xmm1_4

  v1 = (float)(16 * *(_DWORD *)(*((_QWORD *)this + 122) + 332LL)) / (float)*(int *)(*((_QWORD *)this + 122) + 316LL);
  *(float *)(*((_QWORD *)this + 122) + 392LL) = v1;
  v2 = *((_QWORD *)this + 122);
  *((float *)this + 107) = v1;
  v3 = (float)(16 * *(_DWORD *)(v2 + 336)) / (float)*(int *)(v2 + 320);
  *(float *)(v2 + 396) = v3;
  *((float *)this + 108) = v3;
}
